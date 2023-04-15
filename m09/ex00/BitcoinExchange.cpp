#include "BitcoinExchange.hpp"

double BitcoinExchange::findRate(const string &date, map<string, double> data) {
	map<string, double>::iterator it = data.find(date);
	if (it != data.end())
		return it->second;
	string previousDay = moveDateBackOneDay(date);
	if (previousDay =="not valid date")
		return 0;
	return findRate(previousDay, data);
}

void BitcoinExchange::checkInput(char *file, const map<string, double>& data) {
	ifstream inputFile(file);
	if (!inputFile) {
		cerr << "Error: Failed to open the file.\n";
		exit(1);
	}
	string line;
	getline(inputFile, line);
	if (line != "date | value") {
		cerr << "Error: First line of file is not 'date | value'.\n";
		exit(1);
	}
	while (getline(inputFile, line)) {
		istringstream iss(line);
		string date, value;
		char separator;

		iss >> date >> separator >> value;
		if (iss.fail() || separator != '|')
			cout << "Error: bad input => " << date << "\n";
		else if (!ifValidDate(date) || !ifValidValue(value))
			cout << "Error: bad input => " << date << "\n";
		else if (stod(value) < 0)
			cout << "Error: not a positive number.\n";
		else if (stod(value) > 1000)
			cout << "Error: too large number.\n";
		else if (stod(value) < 1000 || stod(value) > 0) {
			double multiplication = stod(value) * findRate(date, data);
			cout << date << " => " << value << " = " << multiplication << endl;
		}
		else
			cout << "Error: bad input => " << date << endl;
	}
	inputFile.close();
}

map<string, double> BitcoinExchange::readData() {
	map<string, double> _data;
	ifstream file("data.csv");
	string line;

	getline(file, line);
	while (getline(file, line)) {
		stringstream ss(line);
		string date, rate;
		getline(ss, date, ',');
		getline(ss, rate, ',');
		_data[date] = stod(rate);
	}
	return _data;
}

string BitcoinExchange::moveDateBackOneDay(const string &date) {
	int year, month, day;
	char separator1, separator2;
	istringstream ss(date);
	ss >> year >> separator1 >> month >> separator2 >> day;
	if (ss.fail() || separator1 != '-' || separator2 != '-')
		return "not valid date";
	int prev_day = day - 1;
	int prev_month = month;
	int prev_year = year;

	if (prev_day == 0) {
		prev_month = month - 1;
		if (prev_month == 0) {
			prev_month = 12;
			prev_year = year - 1;
			if (prev_year < 2009)
				return "not valid date";
		}
		switch (prev_month) {
			case 2:
				// Leap years
				if (prev_year % 4 == 0
					&& (prev_year % 100 || prev_year % 400 == 0))
					prev_day = 29;
				else
					prev_day = 28;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				prev_day = 30;
				break;
			default:
				prev_day = 31;
		}
	}
	string prev_date = to_string(prev_year) + "-";
	if (prev_month < 10)
		prev_date += "0" + to_string(prev_month);
	else
		prev_date += to_string(prev_month);
	if (prev_day < 10)
		prev_date += "-0" + to_string(prev_day);
	else
		prev_date += "-" + to_string(prev_day);
	return (prev_date);
}

bool BitcoinExchange::ifValidDate(const string &date) {
	if (date.length() != 10)
		return false;
	int year, month, day;
	char separator1, separator2;
	istringstream ss(date);
	ss >> year >> separator1 >> month >> separator2 >> day;
	if (ss.fail() || separator1 != '-' || separator2 != '-')
		return false;
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	bool leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	if (month == 2 && (leap_year ? day > 29 : day > 28))
		return false;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	return true;
}

bool BitcoinExchange::ifValidValue(const string &value) {
	try {
		stof(value);
	}
	catch (const std::invalid_argument& e) {
		return false;
	}
	return true;
}


#pragma once

#include <string>
#include <map>
#include <cstdlib> // exit
#include <iostream> // io stream
#include <fstream> // file stream
#include <sstream> // std::istringstream
#include <exception>

using std::string;
using std::map;
using std::ifstream;
using std::getline;
using std::stringstream;
using std::cout;
using std::cerr;
using std::endl;
using std::stod;
using std::to_string;
using std::istringstream;

class BitcoinExchange {
public:
	double findRate(const string &date, map<string, double> data);
	void checkInput(char *file, const map<string, double>& data);
	static map<string, double> readData();
	static string moveDateBackOneDay(const string &date);
	static bool ifValidDate(const string &date);
	static bool ifValidValue(const string &value);
};

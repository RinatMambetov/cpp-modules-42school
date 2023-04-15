#include <iostream>
#include <cstdlib>
#include <map>
#include "BitcoinExchange.hpp"

using std::cout;
using std::string;
using std::map;

int main(int argc, char *argv[]) {
	BitcoinExchange exchange;
	if (argc != 2) {
		cout << "Error: could not open file.\n";
		exit(1);
	}
	map<string, double> _data = exchange.readData();
	exchange.checkInput(argv[1], _data);
	return (0);
}

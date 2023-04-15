#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using std::cout;
using std::stack;
using std::istringstream;
using std::string;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "Error: Expression not found.\n";
		return (1);
	}
	stack<int> numbers;
	istringstream ss(argv[1]);
	string token;
	while (ss >> token) {
		if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (numbers.size() < 2) {
				cout << "Error: Wrong operands for "
					 << token << "operator.\n";
				return (1);
			}
			int n2 = numbers.top();
			numbers.pop();
			int n1 = numbers.top();
			numbers.pop();
			int result;
			if (token == "+")
				result = n1 + n2;
			else if (token == "-")
				result = n1 - n2;
			else if (token == "*")
				result = n1 * n2;
			else if (token == "/" && n2 == 0) {
				cout << "Error: Division by zero.\n";
				return (1);
			}
			else if (token == "/" && n2 != 0)
				result = n1 / n2;
			numbers.push(result);
		}
		else {
			for (int i = 0; token[i]; i++) {
				if (isdigit(token[i]) == 0) {
					cout << "Error\n";
					return (1);
				}
			}
			numbers.push(stoi(token));
		}
	}
	if (numbers.size() != 1) {
		cout << "Error: Invalid input expression.\n";
		return (1);
	}
	cout << numbers.top() << "\n";
	return (0);
}

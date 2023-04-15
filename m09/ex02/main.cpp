#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	try
	{
		if (argc < 2)
			throw "Error: not the right number of arguments.";
		PmergeMe test;
		test.ft_sort(argv);
	}
	catch(const char *str)
	{
		std::cerr << str << '\n';
	}
}

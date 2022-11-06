/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:26:19 by greita            #+#    #+#             */
/*   Updated: 2022/09/16 20:28:16 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <fstream>

std::string &replaceStr(std::string &strInput, char *s1, char *s2)
{
	std::string str1(s1);
	std::string str2(s2);
	size_t str1Len = str1.length();
	while (strInput.find(str1) != std::string::npos)
	{
		size_t found(strInput.find(str1));
		strInput.erase(found, str1Len);
		strInput.insert(found, str2);
	}
	return strInput;
}

void checkFile(std::fstream &file)
{
	if (!file)
	{
		std::cerr << "Error: bad file\n";
		exit(1);
	}
}

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		std::fstream inf(argv[1]);
		checkFile(inf);

		std::string outfName(argv[1]);
		outfName.append(".replace");
		std::fstream outf(outfName, std::ios::out);
		checkFile(outf);

		while (inf)
		{
			std::string strInput;
			getline(inf, strInput);
			strInput = replaceStr(strInput, argv[2], argv[3]);
			if (inf)
				outf << strInput << '\n';
		}
	}
	else
	{
		std::cerr << "Error: bad arguments\n";
		exit(1);
	}

	return 0;
}

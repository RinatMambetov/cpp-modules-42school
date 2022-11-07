/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:36:12 by greita            #+#    #+#             */
/*   Updated: 2022/10/21 15:06:17 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

int const highestPossibleGrade(1);
int const lowestPossibleGrade(150);

class Bureaucrat
{
private:
	std::string const m_name;
	int m_grade;
	Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &orig);

public:
	~Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &orig);

	std::string const &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	class GradeTooLowException : public std::exception
	{
	public:
		virtual char const *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual char const *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &b);

#endif

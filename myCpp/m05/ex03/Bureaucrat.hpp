/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:36:38 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 17:47:03 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

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

	void signForm(Form &form) const;
	void executeForm(Form const &form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &b);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:36:41 by greita            #+#    #+#             */
/*   Updated: 2022/10/21 21:19:33 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : m_name(name)
{
	if (grade > lowestPossibleGrade)
		throw Bureaucrat::GradeTooLowException();

	if (grade < highestPossibleGrade)
		throw Bureaucrat::GradeTooHighException();

	m_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &orig)
	: m_name(orig.getName()), m_grade(orig.getGrade()) {}

std::string const &Bureaucrat::getName() const { return m_name; }

int Bureaucrat::getGrade() const { return m_grade; }

void Bureaucrat::incrementGrade()
{
	if (m_grade == highestPossibleGrade)
		throw Bureaucrat::GradeTooHighException();
	--m_grade;
}

void Bureaucrat::decrementGrade()
{
	if (m_grade == lowestPossibleGrade)
		throw Bureaucrat::GradeTooLowException();
	++m_grade;
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << '.';
	return out;
}

void Bureaucrat::signForm(Form &form) const
{
	if (getGrade() <= form.getGradeToSign())
	{
		std::cout << "Bureaucrat " << getName() << " signed form " << form.getName() << ".\n";
		form.setSignedStatus(true);
	}
	else
	{
		std::cout << "Bureaucrat " << getName() << " couldn’t sign form " << form.getName() << ", because the grade is too low!\n";
		throw Bureaucrat::GradeTooLowException();
	}
}

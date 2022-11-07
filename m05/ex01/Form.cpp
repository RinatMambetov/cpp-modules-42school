/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:15:30 by greita            #+#    #+#             */
/*   Updated: 2022/10/21 21:19:42 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form() {}

Form::Form(std::string const &name, int gradeToSign, int gradeToExecute)
try : m_name(name), m_isSigned(defaultSignStatus), m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute)
{
	if (m_gradeToSign > lowestPossibleGradeToSign)
		throw Form::GradeTooLowException();

	if (m_gradeToSign < highestPossibleGradeToSign)
		throw Form::GradeTooHighException();
}
catch (std::exception &e)
{
	throw;
}

Form::Form(Form const &orig)
	: m_name(orig.getName()), m_isSigned(orig.getSignedStatus()),
	  m_gradeToSign(orig.getGradeToSign()), m_gradeToExecute(orig.getGradeToExecute()) {}

std::string const &Form::getName() const { return m_name; }

bool Form::getSignedStatus() const { return m_isSigned; }

int Form::getGradeToSign() const { return m_gradeToSign; }

int Form::getGradeToExecute() const { return m_gradeToExecute; }

void Form::setSignedStatus(bool status) { m_isSigned = status; }

char const *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

char const *Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!");
}

void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() <= getGradeToSign())
	{
		std::cout << "Bureaucrat " << b.getName() << " signed form " << getName() << ".\n";
		m_isSigned = true;
	}
	else
	{
		std::cout << "Bureaucrat " << b.getName() << " couldn’t sign form " << getName() << ", because the grade is too low!\n";
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "Form " << form.getName() << " get signed status " << form.getSignedStatus()
		<< ", get grade to sign " << form.getGradeToSign() << ", get grade to execute " << form.getGradeToExecute() << '.';
	return out;
}

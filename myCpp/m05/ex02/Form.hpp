/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:15:27 by greita            #+#    #+#             */
/*   Updated: 2022/10/17 17:44:42 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

int const highestPossibleGradeToSign(1);
int const lowestPossibleGradeToSign(150);
bool const defaultSignStatus(false);

class Form
{
private:
	std::string const m_name;
	bool m_isSigned;
	int const m_gradeToSign;
	int const m_gradeToExecute;
	Form();
	std::string const m_target;
	Form &operator=(Form const &orig);

public:
	virtual ~Form();
	Form(std::string const &name, int gradeToSign, int gradeToExecute, std::string const &target);
	Form(Form const &orig);

	std::string const &getName() const;
	bool getSignedStatus() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void setSignedStatus(bool status);
	std::string const &getTarget() const;

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

	class FormIsNotSignedException : public std::exception
	{
	public:
		virtual char const *what() const throw();
	};

	void beSigned(Bureaucrat const &b);
	virtual void execute(Bureaucrat const &executor) const = 0;
	void checkRequirements(Bureaucrat const &b) const;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif

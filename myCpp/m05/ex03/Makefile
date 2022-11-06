# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 11:39:45 by greita            #+#    #+#              #
#    Updated: 2022/10/17 19:44:55 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		ex03

GREEN = 	"\033[1;32m"
BREAK = 	"\033[0m"

SRC = 		main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp \

HEADERS =	Bureaucrat.hpp \
			Form.hpp \
			ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp \
			PresidentialPardonForm.hpp \
			Intern.hpp \

all: 		$(NAME)

$(NAME): 	Makefile $(SRC) $(HEADERS)
			@c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
			@echo $(GREEN)"Compile $(NAME) done!"$(BREAK)

re:			clean all

clean:
			@rm -f $(NAME)

run:		re
			@./$(NAME)

leaks:		re
			@leaks --atExit -- ./$(NAME)

.PHONY:		all re clean run leaks

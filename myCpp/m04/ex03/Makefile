# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 18:25:28 by greita            #+#    #+#              #
#    Updated: 2022/10/16 11:41:10 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		ex03

GREEN = 	"\033[1;32m"
BREAK = 	"\033[0m"

SRC = 		main.cpp \
			AMateria.cpp \
			Ice.cpp \
			Cure.cpp \
			Character.cpp \
			MateriaSource.cpp \

HEADERS =	AMateria.hpp \
			Ice.hpp \
			Cure.hpp \
			ICharacter.hpp \
			Character.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp \

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

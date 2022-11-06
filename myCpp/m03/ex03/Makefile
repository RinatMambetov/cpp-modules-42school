# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 17:43:52 by greita            #+#    #+#              #
#    Updated: 2022/09/30 17:48:39 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		ex03

GREEN = 	"\033[1;32m"
BREAK = 	"\033[0m"

SRC = 		main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp

HEADERS =	ClapTrap.hpp \
			ScavTrap.hpp \
			FragTrap.hpp \
			DiamondTrap.hpp

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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 11:26:57 by greita            #+#    #+#              #
#    Updated: 2022/09/16 11:26:59 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		ex03

GREEN = 	"\033[1;32m"
BREAK = 	"\033[0m"

SRC = 		main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

HEADERS =	Weapon.hpp \
			HumanA.hpp \
			HumanB.hpp

all: 		$(NAME)

$(NAME): 	Makefile $(SRC) $(HEADERS)
			@g++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
			@echo $(GREEN)"Compile $(NAME) done!"$(BREAK)

re:			clean all

clean:
			@rm -f $(NAME)

run:		re
			@./$(NAME)

leaks:		re
			@leaks --atExit -- ./$(NAME)

.PHONY:		all re clean run leaks

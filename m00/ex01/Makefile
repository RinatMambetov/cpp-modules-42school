# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 22:11:58 by greita            #+#    #+#              #
#    Updated: 2022/08/14 22:12:00 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		phonebook

GREEN = 	"\033[1;32m"
BREAK = 	"\033[0m"

SRC = 		main.cpp \
			utils.cpp \
			Contact.cpp \
			Phonebook.cpp

HEADERS =	utils.hpp \
			Contact.hpp \
			Phonebook.hpp

all: 		$(NAME)

$(NAME): 	Makefile $(SRC) $(HEADERS)
			@g++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
			@echo $(GREEN)"Compile $(NAME) done!"$(BREAK)

re:			clean all

clean:
			@rm -f $(NAME)

.PHONY:		all re clean

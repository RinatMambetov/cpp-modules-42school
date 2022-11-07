# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 19:14:08 by greita            #+#    #+#              #
#    Updated: 2022/08/15 19:15:35 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		tests

GREEN = 	"\033[1;32m"
BREAK = 	"\033[0m"

SRC = 		tests.cpp \
			Account.cpp

HEADERS =	Account.hpp

all: 		$(NAME)

$(NAME): 	Makefile $(SRC) $(HEADERS)
			@g++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
			@echo $(GREEN)"Compile $(NAME) done!"$(BREAK)

re:			clean all

clean:
			@rm -f $(NAME)

run:		re
			@./$(NAME)

.PHONY:		all re clean run

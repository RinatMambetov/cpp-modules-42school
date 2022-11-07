# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 11:39:45 by greita            #+#    #+#              #
#    Updated: 2022/10/23 23:08:16 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		ex00

GREEN = 	"\033[1;32m"
BREAK = 	"\033[0m"

SRC = 		$(wildcard *.cpp)

HEADERS =	$(wildcard *.hpp)

all: 		$(NAME)

$(NAME): 	Makefile $(SRC) $(HEADERS)
			@c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
			@echo $(GREEN)"Compile $(NAME) done!"$(BREAK)

re:			clean all

clean:
			@rm -f $(NAME)

run:		re
			@./$(NAME) 0
			@./$(NAME) nan
			@./$(NAME) 42.0f
			@./$(NAME) -inf
			@./$(NAME) +inf

leaks:		re
			@leaks --atExit -- ./$(NAME) 0

.PHONY:		all re clean run leaks

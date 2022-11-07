# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 11:25:16 by greita            #+#    #+#              #
#    Updated: 2022/09/16 11:25:17 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		harlFilter

GREEN = 	"\033[1;32m"
BREAK = 	"\033[0m"

SRC = 		main.cpp \
			Harl.cpp

HEADERS =	Harl.hpp

all: 		$(NAME)

$(NAME): 	Makefile $(SRC) $(HEADERS)
			@g++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
			@echo $(GREEN)"Compile $(NAME) done!"$(BREAK)

re:			clean all

clean:
			@rm -f $(NAME)

run:		re
			@echo $(GREEN)DEBUG$(BREAK)
			@./$(NAME) DEBUG
			@echo $(GREEN)INFO$(BREAK)
			@./$(NAME) INFO
			@echo $(GREEN)WARNING$(BREAK)
			@./$(NAME) WARNING
			@echo $(GREEN)ERROR$(BREAK)
			@./$(NAME) ERROR
			@echo $(GREEN)DEFAULT$(BREAK)
			@./$(NAME) DEFAULT

leaks:		re
			@leaks --atExit -- ./$(NAME) DEBUG

.PHONY:		all re clean run leaks

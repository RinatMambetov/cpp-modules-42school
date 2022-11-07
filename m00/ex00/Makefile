# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/06 20:02:20 by greita            #+#    #+#              #
#    Updated: 2022/08/06 20:07:26 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

GREEN = "\033[1;32m"
BREAK = "\033[0m"

all: $(NAME)

$(NAME):
	@g++ -Wall -Wextra -Werror -std=c++98 $(NAME).cpp -o $(NAME)
	@echo ${GREEN}"Compile ${NAME} done!"${BREAK}

re:	clean all

clean:
	@rm -f $(NAME)

test:
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME)

.PHONY:	all re clean test

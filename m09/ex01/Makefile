NAME  = RPN
SRCS  = $(wildcard *.cpp)
INCL  = $(wildcard *.hpp)
OBJS  = $(SRCS:.cpp=.o)

# Compile your code with flags -Wall -Wextra -Werror
FLAGS = -Wall -Werror -Wextra -I
# Your code should compile with flag -std=c++98
FLAGS += -std=c++98
# clang and gcc forbidden, for debug use -gdwarf
CC    = c++

all:    $(NAME)

$(NAME):  $(OBJS) $(INCL)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCL)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re

NAME = zombie

CFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp zombieHorde.cpp Zombie.cpp

all: $(NAME)

$(NAME): $(SRC)
	c++ -o $@ $^ $(CFLAG)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

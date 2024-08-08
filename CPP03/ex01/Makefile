NAME = scavTrap

CFLAG = -Wall -Wextra -Werror -Wshadow -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

all: $(NAME)

$(NAME): $(SRC)
	c++ -o $@ $^ $(CFLAG)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

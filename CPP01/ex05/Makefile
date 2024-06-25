NAME = harl

CFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp

all: $(NAME)

$(NAME): $(SRC)
	c++ -o $@ $^ $(CFLAG)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

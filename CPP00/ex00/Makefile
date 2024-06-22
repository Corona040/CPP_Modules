NAME = megaphone

SRC = megaphone.cpp

CFLAG = -Wall -Wextra -Werror -std=c++98

all = $(NAME)

$(NAME): $(SRC)
	c++ -o $@ $< $(CFLAG)

clean:

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

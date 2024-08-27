NAME = phonebook

SRC = main.cpp PhoneBook.cpp Contact.cpp

CFLAG = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(SRC)
	c++ -o $@ $^ $(CFLAG)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

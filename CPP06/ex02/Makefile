NAME = identify

CFLAG = -Wall -Wextra -Werror -Wshadow -std=c++98 -g

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

all: $(NAME)

$(NAME): $(SRC)
	c++ -o $@ $^ $(CFLAG)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

vgdb:
	valgrind --leak-check=full --show-leak-kinds=all --track-fds=yes -q --vgdb-error=0 ./$(NAME)

.PHONY: all clean fclean re vgdb

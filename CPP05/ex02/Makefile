NAME = aform

CFLAG = -Wall -Wextra -Werror -Wshadow -std=c++98 -g

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

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

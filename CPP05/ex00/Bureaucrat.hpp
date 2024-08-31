#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat {
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		~Bureaucrat(void);

		std::string	getName(void) const;
		int			getGrade(void) const;

		void		incrementGrade(void);
		void		decrementGrade(void);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Grade too high");
				}
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Grade too low");
				}
		};
	

	private:
		Bureaucrat &(operator=)(Bureaucrat b);

		const std::string	name;
		int					grade;
};
std::ostream	&(operator<<)(std::ostream &os, const Bureaucrat &b);

#endif

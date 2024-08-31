#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class Form {
	public:
		Form(const std::string name, const int grade_to_sign, const int grade_to_exec);
		Form(const Form &f);
		~Form(void);

		std::string	getName(void) const;
		bool		getIsSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;

		void		beSigned(const Bureaucrat &b);

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
		Form &(operator=)(Form f);

		const std::string	name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_exec;
};
std::ostream	&(operator <<)(std::ostream &os, const Form &f);

#endif

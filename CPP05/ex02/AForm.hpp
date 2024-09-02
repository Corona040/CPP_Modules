#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class AForm {
	public:
		AForm(const std::string name, const int grade_to_sign, const int grade_to_exec);
		AForm(const AForm &f);
		~AForm(void);

		std::string		getName(void) const;
		bool			getIsSigned(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExec(void) const;

		void			beSigned(const Bureaucrat &b);
		void			beExecuted(const Bureaucrat &b) const;
		virtual void	execute(const Bureaucrat &b) const = 0;

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what(void) const throw() {
					return ("Grade too high");
				}
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what(void) const throw() {
					return ("Grade too low");
				}
		};

		class ExecuteUnsignedException: public std::exception {
			public:
				virtual const char *what(void) const throw() {
					return ("Execute unsigned");
				}
		};
	
	private:
		AForm &(operator=)(AForm f);

		const std::string	name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_exec;

	protected:
		AForm(const std::string name, const int grade_to_sign, const int grade_to_exec, const std::string target);

		std::string			target;
};
std::ostream	&(operator <<)(std::ostream &os, const AForm &f);

#endif

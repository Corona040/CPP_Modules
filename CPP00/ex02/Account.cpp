#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
	// const time_t my_time = time(NULL); 

	std::time_t now = std::time(NULL);
	std::tm * ptm = std::localtime(&now);
	char buffer[32];
	// Format: Mo, 15.06.2009 20:20:00
	std::strftime(buffer, 32, "[%Y%m%d_%H%M%S]", ptm); 
	std::cout << buffer << " ";
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit ) {
	int	p_amount = _amount;

	_displayTimestamp();
	if (deposit <= 0) {
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "deposit:refused" << std::endl;
	} else {
		_amount += deposit;
		_nbDeposits++;
		_totalAmount += deposit;
		_totalNbDeposits++;

		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "deposit:" << deposit << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal( int withdrawal ) {
	int p_amount = _amount;

	_displayTimestamp();
	if (_amount < withdrawal || withdrawal <= 0) {
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;

		return (false);
	} else {
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;

		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;

		return (true);
	}
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit ) {
	if (initial_deposit >= 0) {
		this->_accountIndex = getNbAccounts();
		this->_amount = initial_deposit;
		this->_nbDeposits = 0;
		this->_nbWithdrawals = 0;

		this->_nbAccounts = getNbAccounts() + 1;
		this->_totalAmount = getTotalAmount() + initial_deposit;

		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "created" << std::endl;
	}
}

Account::Account( void ) {
	this->_accountIndex = getNbAccounts();
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_nbAccounts = getNbAccounts() + 1;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:0;created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

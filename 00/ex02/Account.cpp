#include "Account.hpp"
#include<ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	time_t rawtime;
	struct tm *timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << "[" << timeinfo->tm_year + 1900 << timeinfo->tm_mon + 1
			<< timeinfo->tm_mday;
	std::cout << "_" << timeinfo->tm_hour << timeinfo->tm_min
			<< timeinfo->tm_sec << "]" << " ";
}

Account::Account(int initial_deposit)
{
	static int	index = 0;
	_accountIndex = index;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	index++;
	_nbAccounts = index;
	_totalAmount = _totalAmount + _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
			<< ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";amount:" << _amount + deposit << ";deposits:"
		<< _nbDeposits + 1 << ";withdrawals:" << _nbWithdrawals
		<< std::endl;
	_amount = _amount + deposit;
	_nbDeposits = _nbDeposits + 1;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount - withdrawal < 0)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
			<< ";withdrawal:refused"  << std::endl;
		return (0);
	}
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";amount:" << _amount - withdrawal << ";deposits:"
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals + 1
		<< std::endl;
	_amount = _amount - withdrawal;
	_nbWithdrawals = _nbWithdrawals + 1;
	return (1);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
		<< _totalNbWithdrawals << std::endl;
}




/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:38:20 by namerei           #+#    #+#             */
/*   Updated: 2021/06/29 18:38:24 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
# define BLU    "\x1B[34m"
# define RESET  "\x1B[0m"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _nbDeposits(0), _nbWithdrawals(0) {
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;

	_totalAmount += _amount;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

//GETTERS:
int Account::getNbAccounts() {
	return _nbAccounts;
}
int Account::getTotalAmount() {
	return _totalAmount;
}
int Account::getNbDeposits() {
	return _totalNbDeposits;
}
int Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
	std::cout << BLU;
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()  << ";total:" << getTotalAmount() <<
	";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << RESET"\n";
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount +=deposit;
	std::cout <<  ";deposit:" << deposit << ";amount:" << checkAmount()
	<< ";nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
	if (checkAmount() >= withdrawal) {
		_amount -= withdrawal;
		_totalAmount -=withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << checkAmount() <<
		";nb_withdrawals:" << _nbWithdrawals;
	} else {
		std::cout << "refused";
	}
	std::cout << std::endl;
	return false;
}

int Account::checkAmount() const {
	return _amount;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() <<
	";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp() {
	std::time_t time = std::time(nullptr);
	struct tm *now = localtime(&time);

	std::cout << '[' << (now->tm_year + 1900)
	  << std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
	  << std::setw(2) << std::setfill('0') << now->tm_mday<< '_'
	  << std::setw(2) << std::setfill('0') << now->tm_hour
	  << std::setw(2) << std::setfill('0') << now->tm_min
	  << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}
Account::Account() : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
}

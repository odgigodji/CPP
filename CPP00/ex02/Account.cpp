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

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _nbDeposits(0), _nbWithdrawals(0) {
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
//	_totalNbDeposits++;

	_totalAmount += _amount;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<
	";amount:" << _amount <<
	";created" << std::endl;

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

void Account::displayAccountsInfos() { //accounts:8;total:12442;deposits:8;withdrawals:6
	_displayTimestamp();
	std::cout <<
	"accounts:" << getNbAccounts()  <<
	";total:" << getTotalAmount() <<
	";deposits:" << getNbDeposits() <<
	";withdrawals:" << getNbWithdrawals() <<
	std::endl;
}


Account::~Account() {
;
}

void Account::makeDeposit(int deposit) {
//	_displayTimestamp();
}

bool Account::makeWithdrawal(int withdrawal) {
	return false;
}

int Account::checkAmount() const {
	return 0;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<
	";amount:" << _amount <<
	";created" << std::endl;
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

Account::Account() {
	_nbAccounts = 0;
}

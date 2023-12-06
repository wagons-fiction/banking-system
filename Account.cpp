// Account.cpp
#include "Account.h"

Account::Account(int accountNumber, std::string ownerName, double balance)
    : accountNumber(accountNumber), ownerName(ownerName), balance(balance) {}

int Account::getAccountNumber() const {
    return accountNumber;
}

std::string Account::getOwnerName() const {
    return ownerName;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    }
    return false;
}

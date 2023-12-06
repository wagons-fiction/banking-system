// Transaction.cpp
#include "Transaction.h"
#include <iostream>

Transaction::Transaction(Account& account, std::string description, double amount)
    : account(account), description(description), amount(amount) {}

void Transaction::execute() {
    std::cout << "Executing transaction: " << description << std::endl;
    std::cout << "Previous balance: $" << account.getBalance() << std::endl;

    if (amount < 0 && !account.withdraw(-amount)) {
        std::cout << "Insufficient funds for withdrawal." << std::endl;
    } else {
        account.deposit(amount);
        std::cout << "New balance: $" << account.getBalance() << std::

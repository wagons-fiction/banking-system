// Transaction.h
#pragma once
#include "Account.h"
#include <string>

class Transaction {
public:
    Transaction(Account& account, std::string description, double amount);

    void execute();

private:
    Account& account;
    std::string description;
    double amount;
};

// Account.h
#pragma once
#include <string>

class Account {
public:
    Account(int accountNumber, std::string ownerName, double balance);

    int getAccountNumber() const;
    std::string getOwnerName() const;
    double getBalance() const;

    void deposit(double amount);
    bool withdraw(double amount);

private:
    int accountNumber;
    std::string ownerName;
    double balance;
};

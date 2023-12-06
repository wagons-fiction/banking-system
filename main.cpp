// main.cpp
#include "Account.h"
#include "Transaction.h"
#include <iostream>

int main() {
    Account myAccount(12345, "John Doe", 1000.0);

    Transaction deposit(myAccount, "Salary Deposit", 2000.0);
    deposit.execute();

    Transaction withdrawal(myAccount, "Grocery Shopping", -500.0);
    withdrawal.execute();

    return 0;
}

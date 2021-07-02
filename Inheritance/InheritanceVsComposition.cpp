#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Account
{
private:
    string accountName;
    int saving;

public:
    void deposit(double amount);
    void withdraw(double amount);
    void info()
    {
    }
};

class Saving_Account() : public Account
{
}

int main()
{
    return 0;
}
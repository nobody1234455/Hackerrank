#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
private:
    /* data */
public:
    void deposit(double amount);
    void withdraw(double amount);
    Account(/* args */);
    ~Account();
};

Account::Account(/* args */)
{
}

Account::~Account()
{
}

#endif /* _ACCOUNT_H_ */
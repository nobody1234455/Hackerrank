#pragma once

#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int paymentPerHour;

public:
    Employee(string name, int paymentPerHour)
    {
        this->name = name;
        this->paymentPerHour = paymentPerHour;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setPaymentPerHour(int paymentPerHour)
    {
        this->paymentPerHour = paymentPerHour;
    }
    int getPaymentPerHour()
    {
        return paymentPerHour;
    }
    string getName()
    {
        return name;
    }
    virtual int calculateSalary() = 0;
};
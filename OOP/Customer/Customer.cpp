#pragma once
#include <iostream>

using namespace std;

// #ifndef CUSTOMER_CPP
// #define CUSTOMER_CPP
class Customer
{
private:
    int id;
    string name;
    int discount;

public:
    Customer(){};
    Customer(int id, string name, int discount)
    {
        this->id = id;
        this->name = name;
        this->discount = discount;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setDiscount(int discount)
    {
        this->discount = discount;
    }
    int getId()
    {
        return id;
    }
    int getDiscount()
    {
        return discount;
    }
    string getName()
    {
        return name;
    }
};

//#endif //CUSTOMER_CPP
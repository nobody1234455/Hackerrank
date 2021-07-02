#pragma once
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class Author
{
private:
    string name;
    string email;

public:
    Author(string name, string email)
    {
        this->name = name;
        this->email = email;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
    string getName()
    {
        return name;
    }
    string getEmail()
    {
        return email;
    }
};
#include <iostream>

using namespace std;

class Animal
{
public:
    void Sound()
    {
        cout << "some sound" << endl;
    }
};

class Cat : public Animal
{
public:
    virtual void Sound()
    {
        cout << "Meow meow" << endl;
    }
};

class Dog : public Animal
{
public:
    virtual void Sound()
    {
        cout << "woof woof" << endl;
    }
};

int main()
{
    Cat cat;
    Animal *a = &cat;

    a->Sound();

    Dog dog;
    Animal *b = &dog;

    b->Sound();
    return 0;
}
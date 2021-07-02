#pragma once
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#ifndef LINE_CPP_
#define LINE_CPP_

class Point
{
private:
    int x;
    int y;

public:
    Point(){};
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

#endif // LINE_CPP_
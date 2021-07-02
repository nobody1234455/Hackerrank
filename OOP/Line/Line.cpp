#include "Point.cpp"
#include "math.h"
class Line
{
private:
    Point begin;
    Point end;

public:
    Line(Point begin, Point end)
    {
        this->begin = begin;
        this->end = end;
    }
    Line(int x1, int y1, int x2, int y2)
    {
        begin = Point(x1, y1);
        end = Point(x2, y2);
    }
    void setBegin(Point begin)
    {
        this->begin = begin;
    }
    void setEnd(Point end)
    {
        this->end = end;
    }
    Point getBegin()
    {
        return begin;
    }
    Point getEnd()
    {
        return end;
    }
    double getLength()
    {
        return sqrt((begin.getX() - end.getX()) * (begin.getX() - end.getX()) + (begin.getY() - end.getY()) * (begin.getY() - end.getY()));
    }
};
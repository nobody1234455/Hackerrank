#include "Point.cpp"

class PolyLine : public Point
{
private:
    vector<Point> points;

public:
    PolyLine() {}
    PolyLine(vector<Point> points)
    {
        this->points = points;
    }
    void appendPoint(Point point)
    {
        points.push_back(point);
    }
    void appendPoint(int x, int y)
    {
        Point p;
        p.setX(x);
        p.setY(y);
        points.push_back(p);
    }
    double getLength()
    {
        double result = 0;
        for (int i = 0; i < points.size() - 1; i++)
        {
            result += sqrt(pow(points[i].getX() - points[i + 1].getX(), 2) + pow(points[i + 1].getY() - points[i].getY(), 2));
        }
        return result;
    }
};
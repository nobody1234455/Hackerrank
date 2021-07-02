#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
private:
    int length;
    int width;

public:
    void read_input()
    {
        cin >> length;
        cin >> width;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    void display()
    {
        cout << length << " " << width << endl;
    }
};

class RectangleArea : public Rectangle
{
public:
    void display()
    {
        cout << getWidth() * getLength() << endl;
    };
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}
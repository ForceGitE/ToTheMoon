#include <iostream>
#include <math.h>

using namespace std;
// Base class
class Shape
{
public:
// pure virtual function providing interface framework.
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};

class Rectangle: public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width/2 * height);
    }
};

class Circle: public Shape
{
public:
    int getArea()
    {
        return ((3.14 )* (pow((height/2),2)));
    }
};

int main(void)
{
    Rectangle Rec;
    Rec.setWidth(4);
    Rec.setHeight(10);
// Print the area of the object.
    cout << "Total Rectangle area: " << Rec.getArea() << endl;

    Triangle Tri;
    Tri.setWidth(7);
    Tri.setHeight(11);
// Print the area of the object.
    cout << "Total triangle area: " << Tri.getArea() << endl;

    Circle circ;
    circ.setWidth(7);
    circ.setHeight(8);
// Print the area of the object.
    cout << "Total Circle area: " << circ.getArea() << endl;

    cout << "Total area of all shapes: " << circ.getArea()+Tri.getArea()+Rec.getArea() << endl;


    return 0;

}

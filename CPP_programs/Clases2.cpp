#include <iostream>
using namespace std;


class Rectangle{
    public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{

    Rectangle r1,r2;
    r1.breadth = 5U;
    r1.length = 10U;
    r2.breadth = 12U;
    r2.length = 20U;
    
    cout<<"The area of the rectangle is: "<<r1.area()<<endl;
    cout<<"The perimeter of the rectangle is: "<<r1.perimeter();

    return 0;
}
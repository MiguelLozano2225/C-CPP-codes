#include <iostream>
using namespace std;

#define NORMAL_POINTER  0
#define HEAP_POINTER    1

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
#if NORMAL_POINTER
    Rectangle r;
    Rectangle *ptr_obj;
    ptr_obj = &r;

    ptr_obj->breadth = 10;
    ptr_obj->length = 5;

    cout<<"The Area of the rectangle is: "<<ptr_obj->area()<<endl;
    cout<<"The Perimeter of the rectangle is: "<<ptr_obj->perimeter()<<endl;
#endif

#if HEAP_POINTER
    Rectangle *ptr_obj;
    ptr_obj = new Rectangle;

    Rectangle *ptr = new Rectangle();

    ptr_obj->breadth = 8;
    ptr_obj->length = 12;

    cout<<"The Area of the rectangle is: "<<ptr_obj->area()<<endl;
    cout<<"The Perimeter of the rectangle is: "<<ptr_obj->perimeter()<<endl;

#endif

    return 0;
}
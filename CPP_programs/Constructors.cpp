#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;

    public:
       Rectangle()
       {
           length = 3;
           breadth = 9;
       }

       Rectangle(int l, int b)
       {
           length = l;
           breadth = b;
       }

       Rectangle(Rectangle &r)
       {
           length = r.length;
           breadth = r.breadth;
       }

       
        int area()
        {
            return breadth * length;
        }

        int perimeter()
        {
            return 2 *(breadth + length );
        }


};
int main()
{
    Rectangle r(5,10);
    Rectangle r1(r);

    cout<<"The area is: "<<r1.area();




    return 0;
}
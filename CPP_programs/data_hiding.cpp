#include <iostream>
using namespace std;

#define RUN_NORMAL          0
#define RUN_WITH_POINTER    0
#define RUN_DYNAMIC_POINTER 1

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        void SetLength(int l)
        {
            length = l;
        }

        void SetBreadth(int b)
        {
            breadth = b;
        }

        int GetLength(void)
        {
            return length;
        }

        int GetBreadth(void)
        {
            return breadth;
        }

        int area()
        {
            return GetBreadth() * GetLength();
        }

        int perimeter()
        {
            return 2 *( GetBreadth() + GetLength() );
        }

};

int main()
{
#if RUN_NORMAL
    Rectangle r1;

    r1.SetBreadth(5);
    r1.SetLength(10);

    cout<<"The area is: "<<r1.area()<< endl;
    cout<<"The area is: "<<r1.perimeter();
    return 0;
#endif
#if RUN_WITH_POINTER

    Rectangle r1;
    Rectangle *ptr_obj;

    ptr_obj = &r1;

    ptr_obj->SetBreadth(8);
    ptr_obj->SetLength(12);

    cout<<"The area is: "<<ptr_obj->area()<< endl;
    cout<<"The area is: "<<ptr_obj->perimeter();
#endif

#if RUN_DYNAMIC_POINTER
    Rectangle *ptr = new Rectangle();

    ptr->SetBreadth(3);
    ptr->SetLength(9);

    cout<<"The area is: "<<(*ptr).area()<< endl;
    cout<<"The perimeter is: "<<ptr->perimeter();

#endif
    return 0;

}
#include <iostream>
using namespace std;

class ImaginaryNumbersOperations
{
    private:
        int RealNum_1;
        int ImgNum_1;        
        int RealNum_2;
        int ImgNum_2;

    public:

    ImaginaryNumbersOperations(int r1, int r2, int i1,int i2)
    {
        RealNum_1 = r1;
        RealNum_2 = r2;
        ImgNum_1 = i1;
        ImgNum_2 = i2;
    }

    void  Sum()
    {
        int a,b;
        a = RealNum_1 + RealNum_2;
        b = ImgNum_1 + ImgNum_2;
        std::cout<<"The sum is: "<<RealNum_2 + RealNum_1<<" + "<<ImgNum_1 + ImgNum_2<<"i"<<endl;
    }

    void Subtraction()
    {
        int a;
        a = ImgNum_1 - (ImgNum_2);
        if (a<1)
              std::cout<<"The Subtraction is: "<<RealNum_1 - RealNum_2<<" "<<a<<"i"<<endl;
        
        else
            std::cout<<"The Subtraction is: "<<RealNum_1 - RealNum_2<<" + "<<a<<"i"<<endl;
    }

    void Multiply()
    {
        int a,b,c;
        a = RealNum_1 * RealNum_2;
        b = (RealNum_1 * ImgNum_2) + (RealNum_2 * ImgNum_1);
        c = ImgNum_1 * ImgNum_2;
        c*=-1; 
        a += c;

        if(b<1)
            std::cout<<"The result is: "<<a<<" "<<b<<"i"<<endl;
        else
            std::cout<<"The result is: "<<a<<" + "<<b<<"i"<<endl;
    }

};

int main()
{
    ImaginaryNumbersOperations n(10,3,2,7);

    n.Sum();
    n.Subtraction();
    n.Multiply();
    return 0;
}
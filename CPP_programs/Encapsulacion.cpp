/*La encapsulación es el proceso de combinar datos y metodos en una misma clase
 evitando que sean modificados directamente por facotores externos*/
#include <iostream>
 using namespace std;

class Dog
{
    public:

    string mBark;
    /*Constructor*/
    Dog(string Name, string BarkType)
    {
        mName = Name;
        mBark = BarkType;
    }

    string GetName()
    {
        return mName;
    }

    private:
        string mName;
};

 int manin()
 {
     Dog FirstDog("Woofers", "Berk");

     cout<<FirstDog.GetName()<<endl;
     
     return 0;
 }

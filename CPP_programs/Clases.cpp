/*Es un tipo de dato complejo definido por el programador.
Se podría decir que una clase es un plano de un objeto*/
#include <iostream>
using namespace std;

class  Human
{
    public:
        std::string Name;
/*Constructor*/
     Human()
     {
         Name = "Migue";
     }   
/*Otro constructor*/
     Human(std::string iName)
     {
         Name = iName;
     }
/*Metodo*/
     void Speak()
     {
         std::cout<<"Kioña kiona";
     }
};

int main()
{
    std::string Myname;
    Myname = "YOLO";
    Human MyFirstHuman;
    Human MySecondHuman("Melissa");
    Human MyThrirdHuman(Myname);

    std::cout<<MyFirstHuman.Name<<std::endl;
    std::cout<<MySecondHuman.Name<<std::endl;
    std::cout<<MyThrirdHuman.Name<<std::endl;
    MyFirstHuman.Speak();
    


    return 0;
}
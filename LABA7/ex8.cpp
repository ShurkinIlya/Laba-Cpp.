#include <iostream>

using namespace std;

class Base{
    private:
        string prvt = "private";
    protected:
        string prt = "protected";
    public:
        string pbl = "public";
};
class Derived1 : private Base{
    public:
        Derived1(){
            cout << pbl << endl;    //private
            cout << prt << endl;    //private
            cout << "prvt not avaible" << endl;  //недоступен
        }
};
class Derived2 : protected Base{
    public:
        Derived2(){
            cout << pbl << endl;    //protected
            cout << prt << endl;    //protected
            cout << "prvt not avaible" << endl; //недоступен
        }
};
class Derived3 : public Base{
    public:
        Derived3(){
            cout << pbl << endl;    //public
            cout << prt << endl;    //protected
            cout << "prvt not avaible" << endl; //недоступен
        }
};

int main()
{
    Derived1 private_heritage;
    Derived2 protected_heritage;
    Derived3 public_heritage;
}
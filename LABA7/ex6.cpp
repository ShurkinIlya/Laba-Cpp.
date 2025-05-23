#include <iostream>

using namespace std;

class Base{
    public:
        Base(){
            cout << "Base constructor" << endl;
        }
        virtual ~Base(){
            cout << "Base destructor" << endl;
        }
};

class Derived : public Base{
    public:
        Derived(){
            cout << "Derived constructor" << endl;
        }
        ~Derived() override{
            cout << "Derived destructor" << endl;
        }
};

int main()
{
    Base *obj = new Derived();
    delete obj;

    return 0;
}

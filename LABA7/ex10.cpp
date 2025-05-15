#include <iostream>

using namespace std;

class Base{
    public:
        virtual void foo() = 0;
        virtual void bar() final{
            cout << "Bar-function cannot be overriden!" << endl;
        }
};
class Derived : public Base{
    public:
        void foo() override{
            cout << "foo-function is overriden correct!" << endl;
        }
};

int main()
{
    Derived der;
    der.foo();
    der.bar();

    return 0;
}
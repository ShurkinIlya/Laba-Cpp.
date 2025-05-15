#include <iostream>

using namespace std;

class Printer{
    public:
        void print(){
            cout << "Your word is printed!" << endl;
        }
};
class Scanner{
    public:
        void scan(){
            cout << "Your word is scanned!" << endl;
        }
};

class Copier : public Printer, public Scanner{
    public:
        void copy(){
            cout << "Copier is started!" << endl;
        }
};

int main()
{
    Copier copier;
    copier.copy();
    copier.scan();
    copier.print();

    return 0;
}
#include <iostream>

using namespace std;

class Engine{
    public:
        void start(){
            cout << "The engine is started!" << endl;
        }
        void stop(){
            cout << "The engine is stoped!" << endl;
        }
};

class Car1 : public Engine{
    public:
        void honk(){
            cout << "Bip bip bip" << endl;
        }
};
class Car2{
    public:
        Engine engine;
        void honk(){
            cout << "Bip bip bip" << endl;
        }
};

int main()
{
    Car1 car1;
    car1.start();
    car1.honk();
    car1.stop();
    cout << "\n";
    
    Car2 car2;
    car2.engine.start();
    car2.honk();
    car2.engine.stop();

    return 0;
}
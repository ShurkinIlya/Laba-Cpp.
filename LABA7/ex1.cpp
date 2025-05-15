#include <iostream>

using namespace std;

class Vehicle{
    public:
        void start(){
            cout << "Vehicle is started!" << endl;
        }
        void stop(){
            cout << "Vehicle is stoped!" << endl;
        }
};

class Car : public Vehicle{
    public:
    void honk(){
        cout << "Bip Bip Bip" << endl;
    }
};
class Bicycle : public Vehicle{
    public:
    void ringBell(){
        cout << "Dzin' Dzin' Dzin' " << endl;
    }
};

int main()
{
    Car car;
    cout << "Car: " << endl;
    car.start();
    car.honk();
    car.stop();

    cout << "\n";

    Bicycle bicycle;
    cout << "Bicycle: " << endl;
    bicycle.start();
    bicycle.ringBell();
    bicycle.stop();

    return 0;
}
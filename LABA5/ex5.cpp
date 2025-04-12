#include <iostream>

using namespace std;

class Engine{
    public:
        int power = 100;

        void start(){
            cout << "Engine is started with power " << power << " hp" << endl;
        }
};

class Car{
    private:
        Engine engine;
    
    public:
        void startCar(){
            engine.start();
            cout << "Car is started!" << endl;
        }
};

int main()
{
    Car car;
    car.startCar();

    return 0;
}
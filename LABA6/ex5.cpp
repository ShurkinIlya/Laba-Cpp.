#include <iostream>

using namespace std;

class Distance{
    private:
        int distance;

    public: 
        Distance(){
            cout << "Enter your distance in meters: ";
            cin >> distance;
        }

        operator double() const{
            return distance / 1000.0;
        } 
};

int main()
{
    Distance distance;
    double km = distance;

    cout << "Your distance in kilometers: " << km << endl;

    return 0;
}
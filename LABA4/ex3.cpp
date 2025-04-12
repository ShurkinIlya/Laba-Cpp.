#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class NegativeNumberException: public exception{
    private:
        string message;
    public:
        NegativeNumberException(const string& msg) : message(msg){}
        const char* what() const noexcept override {
			return message.c_str();
        }

};

double sqrt(double x){
    if(x < 0){
        throw NegativeNumberException("The number is negative!");
    }
    return x*x;
}

int main()
{
    try{
        cout << sqrt(-1) << endl;
    }
    catch(const NegativeNumberException& e){
        cerr << e.what() << endl;
    }

    return 0;
}
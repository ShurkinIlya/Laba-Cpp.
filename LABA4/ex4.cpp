#include <iostream>
#include <stdexcept>
using namespace std;

class NegativeNumberException : public exception {
    private: 
        string message;
    public: 
        NegativeNumberException(const string& msg) : message(msg){}
        const char* what() const noexcept override{
            return message.c_str();
        }
};

void processNumber(int x){
    if(x < 0){
        throw NegativeNumberException("The number is negative!");
    }
    else if(x > 100){
        throw out_of_range("The number is very big!");
    }
    else{
        cout << x << endl;
    }
}

int main()
{
    try{
        processNumber(10);
    }
    catch(const NegativeNumberException& e){
        cerr << e.what() << endl;
    }
    catch(const out_of_range& e){
        cerr << e.what() << endl;
    }

    return 0;
}
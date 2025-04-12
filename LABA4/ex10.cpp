#include <iostream>
#include <stdexcept>

using namespace std;

class zeroException : public exception{
    private:
        string message;
    public:
        zeroException(const string msg) : message(msg){}
            const char* what() const noexcept override{
            return message.c_str();
        }
};

int main()
{
    auto checkZero = [](int x){
    if(x == 0){
        throw zeroException("The number is zero!");
    }
    return x; 
    };

    try{
       cout << checkZero(0) << endl;
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }

    return 0;
}
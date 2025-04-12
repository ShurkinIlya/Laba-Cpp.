#include <iostream>
#include <string>
using namespace std;

class MyException : public exception {
    private:
        string message;
    public:
        MyException(const string msg) : message(msg){}
        const char* what() const noexcept override{
            return message.c_str();
        }
};

void riskyFunction(bool fail){
    if(fail){
        throw MyException("Error!");
    }
}

int main()
{
    try{
        riskyFunction(true);
    }
    catch(const MyException& e){
        cerr << e.what() << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

template <typename T> void printType(T value){
    cout << "Type: " << typeid(T).name() << endl;
}

template<> void printType<const char*>(const char* value){
    cout << "Type: C-style string" << endl;
}

int main()
{
    printType(5);
    printType(5.0);
    printType("5");

    return 0;
}
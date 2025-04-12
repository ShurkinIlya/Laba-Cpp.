#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << "You are adult!";
    }
    else if(0 <= age and age < 18){
        cout << "You are child!";
    }
    else{
        cout << "Incorrect age!";
    }

    return 0;
}
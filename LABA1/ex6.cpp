#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    char sign;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Enter sign of operation: ";
    cin >> sign;

    switch(sign){
        case '+':
            cout << "Amount of numbers: " << number1 + number2;
            break;
        case '-':
            cout << "Difference of numbers: " << number1 - number2;
            break;
        case '*':
            cout << "Product of numbers: " << number1 * number2;
            break;
        case '/':
            cout << "Division of numbers: " << number1 / number2;
            break;
    }

    return 0;
}
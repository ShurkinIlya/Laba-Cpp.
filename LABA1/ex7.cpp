#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Enter third number: ";
    cin >> number3;

    float average;
    average = (number1 + number2 + number3)/3;

    cout << "Average number: " << average;
    return 0;
}
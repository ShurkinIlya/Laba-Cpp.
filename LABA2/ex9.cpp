#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    do{
        cout << number % 10;
        number = number / 10;
    }
    while(number >= 1);

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    do{
        sum += n % 10;
        n = n / 10; 
    }
    while(n >= 1);

    cout << " Amount of digits of your number: " << sum;
    return 0;
}
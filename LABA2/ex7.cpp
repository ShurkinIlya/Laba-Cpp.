#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an index of Fibonachi's number: ";
    cin >> n;

    int fib1 = 1, fib2 = 1;
    if(n == 1){
        cout << "Your Fibonachi's number: " << fib1;
    }
    else if(n == 2){
        cout << "Your Fibonachi's number: " << fib2;
    }
    else if(n > 2){
        for(int i = 2; i < n; ++i){
            int fib3 = fib1;
            fib1 = fib2;
            fib2 = fib2 + fib3;
        }
        cout << "Your Fibonachi's number: " << fib2;
    }

    return 0;
}
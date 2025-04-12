#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    int number, x;
    cout << "Enter a number from 1 to 100: ";
    cin >> number;

    srand(time(0));
    x = rand() % (1, 100);
    cout << "The random number: " << x << "\n";

    if(x < number){
        cout << "The random number less than your number!";
    }
    else if(x > number){
        cout << "The random number more than your number!";
    }
    else if(x == number){
        cout << "You guessed it!";
    }


    return 0;
}
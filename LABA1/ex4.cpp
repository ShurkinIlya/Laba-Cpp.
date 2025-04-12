#include <iostream>
using namespace std;

int main()
{ 
    int celsii;
    cout << "Enter a degree in Celsii: ";
    cin >> celsii;
    cout << "Degree in Farengeit: " << (celsii * 9 / 5) + 32;

    return 0;
}
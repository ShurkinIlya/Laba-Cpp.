#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string stroka;
    cout << "Enter a string: ";
    cin >> stroka;

    reverse(stroka.begin(), stroka.end());
    cout<< stroka;
    return 0;
}
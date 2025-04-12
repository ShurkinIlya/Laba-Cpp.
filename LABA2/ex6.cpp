#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: \n";
    cin >> a >> b >> c;

    cout << "Max number: " << max(max(a, b), c);
    cout << "\nMin number: " << min(min(a, b), c);

    return 0;
}
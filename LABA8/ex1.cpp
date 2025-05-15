#include <iostream>

using namespace std;

template <typename T> T maxValue(T a, T b){
    return (a > b) ? a : b;
}

int main()
{
    cout << maxValue(4, 2) << endl;
    cout << maxValue(4.444, 12.123) << endl;
    cout << maxValue("first", "second") << endl;

    return 0;
}
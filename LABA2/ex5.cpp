#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[32];
    int i;
    for(i = 0; n >= 1; ++i){
        arr[i] = n % 2;
        n = n / 2;
    }

    cout << "Your number in binary system: ";
    for(int j = i - 1; j >= 0; --j){
        cout << arr[j];
    }

    return 0;
}
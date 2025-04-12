#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int delitel = 0;
    for(int i = 1; i <= n; ++i){
        if(n % i == 0){
            delitel += 1;
        }
    }
    if(delitel > 2){
        cout << "Your number is not simple!";
    }
    else if(delitel == 2){
        cout << "Your number is simple!";
    }
    else{
        cout << "Error!";
    }

    return 0;
}
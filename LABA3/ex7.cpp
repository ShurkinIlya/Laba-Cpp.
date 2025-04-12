#include <iostream>
using namespace std;

int main()
{
    int* bigArr = new(nothrow) int[1000000000000];
    if(!bigArr){
        cerr << "Out of memory!" << endl;
    }
    else{
        cout << "Success!";
    }

    delete[] bigArr;
    return 0;
}
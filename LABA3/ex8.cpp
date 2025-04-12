#include <iostream>
#include <memory>
using namespace std;

int main()
{
 /* int* a = new int(5);
    int* arr = new int[3]{1, 2, 3};
    delete a; */     // - было
    
    int* a = new int[1]{5};
    int* arr = new int[3]{1, 2, 3};

    delete[] a;
    delete[] arr;

    a = nullptr;
    arr = nullptr;

    return 0;
}
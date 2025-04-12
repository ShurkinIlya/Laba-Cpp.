#include <iostream>
#include <new>

using namespace std;

int main()
{
    try{
        int* arr = new int[10000000000];
        cout << "Success!" << endl;
    }
    catch(const bad_alloc& e){
        cerr <<"memory allocation error: "<< e.what() << endl;
    }
    
    return 0;
}
#include <iostream>

using namespace std;

class DynamicArray{
    private:
        int *arr {new int[n] {1, 2, 3, 4, 5}};
        int n = 5;

    public:
        DynamicArray operator = (DynamicArray& other){
            for(int i=0; i<n; ++i){
                other.arr[i] = arr[i];
            }
            return other;
        }

        friend ostream& operator << (ostream& os, DynamicArray& array){
            for(int i=0; i<array.n; ++i){
                os << array.arr[i];
            }
            return os;
        }

        ~DynamicArray(){
            delete [] arr;
        }
};

int main()
{
    DynamicArray myArr;
    cout << "My array: " << myArr << endl;
    DynamicArray copyArr = myArr;
    cout << "Copy array: " << copyArr << endl;

    return 0;
}
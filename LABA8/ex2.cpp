#include <iostream>
#include <type_traits>

using namespace std;

template <typename T, typename U> bool isEqual( T a, U b){
    static_assert(is_same<T, U>::value, "Error! Types are difficult!");
    return a == b;
}

int main()
{
    cout << isEqual(5, 4) << endl;
    // cout << isEqual(5, 4.0) << endl;
    cout << isEqual(5, 5) << endl;

    return 0;
}
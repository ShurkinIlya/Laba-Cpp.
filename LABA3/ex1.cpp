#include <iostream>

namespace MathUtils{
    const float PI = 3.1415;
    int square(int x){
        return x*x;
    } 
}

int main()
{
    std :: cout << MathUtils :: square(5) << std :: endl;
    std :: cout << MathUtils :: PI;

    return 0;
}
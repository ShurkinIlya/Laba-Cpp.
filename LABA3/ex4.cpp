#include <iostream>

namespace A{ int x = 10;}
namespace B{ int x = 20;}

using namespace A;

int main()
{
    std :: cout << x << std :: endl;
    std :: cout << B :: x;

    return 0;
}
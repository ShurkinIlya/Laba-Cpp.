#include <iostream>

namespace Game{
    namespace Physics{
        void applyGravity(){
            std :: cout << "Gravity applied!";
        }
    }
}

int main()
{
    Game :: Physics :: applyGravity();

    return 0;
}
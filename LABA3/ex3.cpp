#include <iostream>

namespace VeryLongNamespaceName{
    void test(){
        std :: cout << "Test!";
    }
}

namespace Short = VeryLongNamespaceName;

int main(){
    Short :: test();

    return 0;
}
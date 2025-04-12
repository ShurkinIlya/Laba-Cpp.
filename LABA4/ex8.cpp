#include <iostream>
#include <stdexcept>

using namespace std;

class Calculator{
    public:
        int add(int a, int b){
            if(a+b > 1000){
                throw overflow_error("Very big numbers!");
            }
            return a + b;
        }
};

int main()
{
    Calculator calc;
    try{
        cout << calc.add(500, 600) << endl;
    }
    catch(const overflow_error& e){
        cerr << e.what() << endl;
    }

    return 0;
}
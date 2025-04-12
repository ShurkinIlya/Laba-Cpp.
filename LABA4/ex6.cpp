#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle{
    public:
        Rectangle(int width, int height){
            if(width < 0 or height < 0){
                throw invalid_argument("There is a negative number!");
            }
            else{
                cout << "The area is " << width * height << endl;
            }
        }
};

int main()
{
    try{
        Rectangle(-10, 20);
    }
    catch(const invalid_argument& e){
        cerr << e.what() << endl;
    }

    return 0;
}
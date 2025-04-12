#include <iostream>

using namespace std;

class Rectangle{
    private:
        int width;
        int height;

    public:
        Rectangle(){
            cout << "Enter a width of rectangle: ";
            cin >> width;
            cout << "Enter a height of rectangle: ";
            cin >> height;
        }

        friend int calculateArea(Rectangle& rectangle){
            return rectangle.width * rectangle.height;
        }
};

int main()
{
    Rectangle rectangle;
    cout << "Area of rectangle: " << calculateArea(rectangle) << endl;

    return 0;
}
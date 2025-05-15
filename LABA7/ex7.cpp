#include <iostream>

using namespace std;

class Drawable{
    public:
    virtual void draw() = 0;
    virtual double getArea() = 0;
};

class Rectangle : public Drawable{
    private:
        int width;
        int height;
    public:
        Rectangle(int w, int h){
            width = w;
            height = h;
        }
        void draw() override{
            cout << "Rectangle is drown" << endl;
        }
        double getArea(){
            return width * height;
        }
};
class Circle : public Drawable{
    private:
        int radius;
        const double pi = 3.14;
    public:
        Circle(double r){
            radius = r;
        }
        void draw() override{
            cout << "Circle is drown" << endl;
        }
        double getArea(){
            return pi * radius * radius;
        }
};

void print(Drawable& figure){
    figure.draw();
    cout << "Area of figure: " << figure.getArea() << endl;
}

int main()
{
    Rectangle R(4, 5);
    print(R);
    Circle C(3);
    print(C);

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

class Shape{
    public:
    virtual void draw(){
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape{
    public:
    void draw() override{
        cout << "Drawing a circle" << endl;
    }
}; 
class Square : public Shape{
    public:
    void draw() override{
        cout << "Drawing a square" << endl;
    }
}; 
class Triangle : public Shape{
    public:
    void draw() override{
        cout << "Drawing a triangle" << endl;
    }
}; 

int main()
{
    vector<Shape*> shape;

    shape.push_back(new Circle());
    shape.push_back(new Square());
    shape.push_back(new Triangle());

    for(Shape* shapes : shape){
        shapes -> draw();
    }
    for (Shape* shapes : shape) {
        delete shapes;
    }

    return 0;
}

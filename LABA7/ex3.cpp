#include <iostream>

using namespace std;

class Animal{
    public:
    virtual void makeSound() = 0;
};

class Dog : public Animal{
    public:
    void makeSound() override{
        cout << "Gav Gav Gav" << endl;
    }
};
class Cat : public Animal{
    public:
    void makeSound() override{
        cout << "Maw Maw Maw" << endl;
    }
};
class Cow : public Animal{
    public:
    void makeSound() override{
        cout << "Muu Muu Muu" << endl;
    }
};

int main()
{
    Dog dog;
    Cat cat;
    Cow cow;

    cout << "Dog: ";
    dog.makeSound();
    cout << "Cat: ";
    cat.makeSound();
    cout << "Cow: ";
    cow.makeSound();

    return 0;
}
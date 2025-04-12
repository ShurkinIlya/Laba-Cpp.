#include <iostream>

using namespace std;

class Student{
    private:
        string name;
        int age;

    public:
    Student(string p_name, int p_age){
        name = p_name;
        age = p_age;
    }
    Student(const Student &p){
        name = p.name;
        age = p.age;
    }
    void print(){
        cout << "Name: " << name << "\tAge: " << age << endl;
    }
};

int main()
{
    Student student1{"Ivan", 20};
    Student student2{student1};

    student1.print();
    student2.print();

    return 0;
}
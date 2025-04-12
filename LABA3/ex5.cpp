#include <iostream>
using namespace std;

class Student{
public:
    string name;

    Student(string stName){
        name = stName;
        cout << "Student has been created" << endl;
    }
};

int main()
{
    Student* Name = new Student("Alice");
    cout << "Name of student: " << Name -> name << endl;

    delete Name;
    return 0;
}
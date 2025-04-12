#include <iostream>
#include <memory>
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
    auto Name = make_unique<Student>("Alice");
    cout << "Name of student: " << Name -> name << endl;

    return 0;
}
#include <iostream>

using namespace std;

class Student{
    private:
        string name;
        int grade;

    public:
        Student(const string p_name, int p_grade){
            name = p_name;
            grade = p_grade;
        }

        Student operator == (const Student& other){
            if(grade > other.grade){
                return Student(name, grade);
            }
            else if(grade < other.grade){
                return Student(other.name, other.grade);
            }
            else{
                return Student("Both students", grade);
            }
        }
        bool operator < (const Student& other) const{
                return name < other.name;
            }

        friend ostream& operator << (ostream& os, const Student& student){
            os << student.name << "(Grade: " << student.grade << ") ";
            return os;
        }
};

int main()
{
    Student student1("Ivan", 5);
    Student student2("Maksim", 3);

    Student comparison = student1 == student2;
    cout << comparison<< "has a better grade!\n" << endl;

    if (student2 < student1){
        cout << student2 << "is higher on the list than "<< student1 << endl;
    }
    else{
        cout << student1 << "is higher on the list than "<< student2 << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

class Person{
    protected:
        string name;
        int age;
    public: 
        Person(string p_name, int p_age){
            name = p_name;
            age = p_age;
        }
        int bornYear(int age){
            return (2025 - age);
        }
        void print(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Year of born: " << bornYear(age) << endl;
            cout <<"\n";
        }
};
class Employee : public Person{
    protected:
        string education;
        int experience;
    public:
        Employee(string name, int age, string p_education, int p_experience) : Person(name, age){
            education = p_education;
            experience = p_experience;
        }
        void print(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Year of born: " << bornYear(age) << endl;
            cout << "Education: " << education << endl;
            cout << "Experience: " << experience << endl;
            cout <<"\n";
        }
};
class Manager : public Employee{
protected:
    string job;
    int numberSub; // количество подчиненных
public:
    Manager(string name, int age, string education, int experience, string p_job, int p_numberSub) : 
                                                            Employee(name, age, education, experience){
        job = p_job;
        numberSub = p_numberSub;
    }
    
    void print(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Year of born: " << bornYear(age) << endl;
        cout << "Education: " << education << endl;
        cout << "Experience: " << experience << endl;
        cout << "Job: " << job << endl;
        cout << "Number of subordinate: " << numberSub << endl;
        cout <<"\n";
    }
};

int main()
{
    Person person{"Ivan", 20};
    Employee employee{"Vasya", 23, "high education", 2};
    Manager manager{"Sveta", 32, "middle education", 8, "senior manager", 10};
    
    person.print();
    employee.print();
    manager.print();

    return 0;
}


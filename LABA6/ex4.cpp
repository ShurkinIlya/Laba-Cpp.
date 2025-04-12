#include <iostream>

using namespace std;

class Counter{
    private:
        int number;
    
    public:
        Counter(istream& in){
            cout << "Enter a number: ";
            in >> number;
        }
        Counter(){}

        Counter& operator++ (){  // префиксная форма записи
            number += 1;
            return *this;
        }
        Counter operator++ (int){  // постфиксная форма записи
            Counter copy {*this};
            ++(*this);
            return copy;
        }

        friend ostream& operator << (ostream& os, Counter& counter){
            os << counter.number;
            return os;
        }
};

int main()
{
    Counter c1(cin);
    cout << "Number: " << c1 << endl;

    Counter c2 = ++c1;
    cout << "Number after prefix increment operation: " << c2 << endl;
    
    Counter c3 = c1++;
    cout << "Number after postfix increment operation: " << c3 << endl;

    return 0;
}
#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    list<string> Months;

    cout << "Enter names of months: " << endl;
    for(int i = 1; i <= 12; ++i){
        string month;
        cin >> month;
        Months.push_back(month);
    }

    Months.remove_if([](string& m){return m.length() < 5;});
    
    cout << "" << endl;
    cout << "New list of months:" << endl;
    for(auto m : Months){
        cout << m << endl;
    }
    
    return 0;
}
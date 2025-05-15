#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> first(10);
    iota(first.begin(), first.end(), 0);

    vector <int> second(10);
    iota(second.begin(), second.end(), 5);

    vector <int> third;

    set_intersection(first.begin(), first.end(), second.begin(), second.end(), back_inserter(third));
    cout << "First vector: " << endl;
    for(auto& vector1 : first){
        cout << vector1 << " ";
    }
    cout << "\nSecond vector: " << endl;
    for(auto& vector2 : second){
        cout << vector2 << " ";
    }
    cout << "\nSorting vector: " << endl;
    for(auto& sortVector : third){
        cout << sortVector << " ";
    }

    return 0;
}
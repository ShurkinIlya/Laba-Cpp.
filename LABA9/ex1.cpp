#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>

using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b){
    return a.second > b.second;
}

int main()
{
    vector <pair<string, int>> City;

    cout << "Fill out a list of cities: " << endl;
    for(int i = 1; i <= 8; ++i){
        string p_city;
        int p_population;
        cout << "Enter a name of city: ";
        getline(cin >> ws, p_city);
        cout << "Enter a population of the city: ";
        cin >> p_population;
        City.push_back({p_city, p_population});
    }

    sort(City.begin(), City.end(), compare);

    cout << "\n" << "List of sorting in population of cities: " << endl;
    for(auto& city : City){
        cout << city.second << " (City: " << city.first << ")" << endl;
    }

    sort(City.begin(), City.end());

    cout << "\n" << "List of sorting in name of cities: " << endl;
    for(auto& city : City){
        cout << city.first << " (Population: " << city.second << ")" << endl;
    }

    return 0;
}
#include <iostream>
#include <map>

using namespace std;

void search(map<string, int> products, string name){
    auto a = products.find(name);
    if(a != products.end()){
        cout << a -> first << "\t" << a -> second << endl;
    }
    else{
        cout << "Product is not found!" << endl;
    }
}

int main()
{
    map<string, int> products;

    products["apple"] = 10;
    products["cucumber"] = 15;
    products["potato"] = 7;
    products["banana"] = 12;
    products["tomato"] = 17;
    products["limon"] = 9;

    string Name;
    cout << "Enter a name of poroduct: ";
    cin >> Name;
    search(products, Name);

    return 0;
}
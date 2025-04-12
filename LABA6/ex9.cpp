#include <iostream>

using namespace std;

class String{
    private:
        string str;

    public:
        String(){
            cout << "Enter your string: ";
            getline(cin, str);
        }

        char& operator [] (int index){
            return str[index];
        }
};

int main()
{
    String string;
    cout << "Enter an index of your letter: ";
    int index;
    cin >> index;
    cout << "Your letter: " << string[index] << endl;

    return 0;
}
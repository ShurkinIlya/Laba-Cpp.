#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    int counter = 0;
    for(int i = 0; i < strlen(str); ++i){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u' || str[i] == 'y'){
            counter += 1;
        }
    }
    cout << "Amount of vowel letters: " << counter;

    return 0;
}
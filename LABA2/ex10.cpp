#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    char op;

    do{
        cout << "Enter two numbers: \n";
        cin >> number1 >> number2;

        cout << "Enter a operation (+, -, *, /,'x' for exit): \n";
        cin >> op;

        switch(op){
            case '+':
                cout << number1 << op << number2 << "=" << number1 + number2 << endl;
                break;
            case '-':
                cout << number1 << op << number2 << "=" << number1 - number2 << endl;
                break;
            case '*':
                cout << number1 << op << number2 << "=" << number1 * number2 << endl;
                break;
            case '/':
                cout << number1 << op << number2 << "=" << number1 / number2 << endl;
                break;
            case 'x':
                cout << "The end of programm!";
                break;
        }
    
    }
    while(op != 'x');
    
    return 0;
}
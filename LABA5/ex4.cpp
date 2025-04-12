#include <iostream>

using namespace std;

class BankAccount{
    private:
        double balance = 0;
    public:
        string owner;
    
    void deposit(double amount){
        balance += amount;
    }
    void withdraw(double amount){
        balance -= amount;
    }
    void getBalance(){
        cout << "Balance: " << balance << endl;
    }

    BankAccount(){
        cout << "Enter an owner of bank account: ";
        getline(cin, owner);

        int action;

        do{
            double amount;
            cout << "" << endl;
            cout << "A list of actions:\n" << "The end of programm! (0)\n" << "Check a balance (1)\n" << "Top up a balance (2)\n" << "Withdraw from balance (3)" << endl;
            cout << "Choose your action: ";
            cin >> action;
            cout << "" << endl;

            switch (action){
            case 0:
                cout << "Good luck!" << endl;
                break;
            case 1:
                getBalance();
                break;
            case 2:
                cout << "Enter an amount of deposit: ";
                cin >> amount;
                deposit(amount);
                cout << "Your deposit is credited" << endl;
                break;
            case 3:
                cout << "Enter an amount of withdraw: ";
                cin >> amount;
                withdraw(amount);
                cout << "The money is withdrown" << endl;
                break;
            }
        }
        while(action != 0);

        cout << "" << endl;
    }
};

int main()
{
    cout << "Welcome to our Bank!" << endl;
    BankAccount myAccount;

    return 0;
}
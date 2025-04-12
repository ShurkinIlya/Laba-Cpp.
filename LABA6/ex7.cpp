#include <iostream>

using namespace std;

class Secret{
    private:
        string data;

    public:
        Secret(string p_data){
            data = p_data;
        }

        friend class SecretAccess;
};

class SecretAccess{
    public:
        void printSecret(Secret& secret){
            cout << "Secret: " << secret.data << endl;
        }
};

int main()
{
    Secret secret{"We are living in matrix!"};
    SecretAccess printer;
    printer.printSecret(secret);

    return 0;
}
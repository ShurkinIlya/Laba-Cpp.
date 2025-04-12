#include <iostream>
#include <stdexcept>
using namespace std;

class Resource{
    public:
        void load(){
            cout << "Loading resource ..." << endl;
            throw runtime_error("Error of loading resource!");
        }
        ~ Resource(){
            try{
                load();
            }
            catch(const exception& e){
                cerr << e.what() << endl;
            }
        }
};

int main()
{
    try{
        Resource res;
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }

    return 0;
}
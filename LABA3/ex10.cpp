#include <iostream>
#include <vector>
#include <memory>

namespace Library {
    class Book {
    public:
        std::string title;
        
        Book(){
            getline(std::cin, title);
            std::cout << "Book has been created: " << title << std::endl;
        }
    };
}
namespace L = Library;

int main() {
    using namespace std;
    vector<shared_ptr<L::Book>> bookArray; 

    for(int i=0; i<3; ++i){
        cout << "Enter a name of " << i+1 << " book: ";
        bookArray.push_back(make_shared<L::Book>());
    }
    cout << "There is a list of books: " << endl;
    for(int i=0; i<3; ++i){
        cout << bookArray[i] -> title << endl;
    }
    
    return 0;
}

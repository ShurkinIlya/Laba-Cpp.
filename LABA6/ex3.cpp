#include <iostream>

using namespace std;

class Book{
    private:
        string title;
        int year;

    public:
        friend ostream& operator << (ostream& os, const Book& book){
            os << "Title: " << book.title << "\tYear: " << book.year << endl;
            return os;
        }
        friend istream& operator >> (istream& in, Book& book){
            cout << "Enter a title of book: ";
            getline(in, book.title);
            cout << "Enter a year of book: ";
            in >> book.year;
            return in;
        }
};

int main()
{
    Book myBook;
    cin >> myBook;
    cout << "" << endl;
    cout << myBook;
    return 0;
}
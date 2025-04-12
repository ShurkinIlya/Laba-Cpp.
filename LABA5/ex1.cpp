#include <iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;
        int year;

        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Year: " << year << endl;
        }
};

int main()
{
    Book newBook;
    cout << "Enter a title of your book: ";
    getline(cin, newBook.title);
    cout << "Enter the author of your book: ";
    getline(cin, newBook.author);
    cout << "Enter year of your book: ";
    cin >> newBook.year;

    newBook.display();

    return 0;
}
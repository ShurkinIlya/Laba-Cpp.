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

        Book(string in_title, string in_author, int in_year){
            title = in_title;
            author = in_author;
            year = in_year;
            cout << "The book is created in constructor with parameters" << endl;
        }

        ~Book(){
            cout << "Book " << title << "is destroyed!" << endl;
        }
};

int main()
{
    string Title, Author;
    int Year;
    cout << "Enter a title of your book: ";
    getline(cin, Title);
    cout << "Enter the author of your book: ";
    getline(cin, Author);
    cout << "Enter year of your book: ";
    cin >> Year;

    Book newBook1(Title, Author, Year);
    newBook1.display();

    return 0;
}
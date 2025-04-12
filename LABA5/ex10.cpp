#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book{
public:
    string Title;
    string Author;
    int Year; 

    Book(string title, string author, int year){
        Title = title;
        Author = author;
        Year = year;
    }   
};

class Library{
public:
    vector<Book> books;
    
    void addBook(){
        string p_title, p_author;
        int p_year;
        cout << "Enter a title of book: ";
        getline(cin, p_title);
        cout << "Enter an author of book: ";
        getline(cin, p_author);
        cout << "Enter a year of book: ";
        cin >> p_year;
        cout << "" << endl;

        books.push_back(Book(p_title, p_author, p_year));
    }

    void displayAllBooks(){
        for(int i = 0; i < sizeof(books); ++i){
            cout << i << ". " << "Title: " << books[i].Title << "\t\tAuthor: " << books[i].Author << "\t\tYear: " << books[i].Year << endl;
        }
    }
};

int main()
{
    Library library;
    int n;
    do{
        cout << "Enter data of book" << endl;
        library.addBook();
        cout <<"Do you want to add a book?\n" << "Yes: 1\n" << "No: 0" << endl;
        cin >> n;
    }
    while(n != 0);

    library.displayAllBooks();

    return 0;
}
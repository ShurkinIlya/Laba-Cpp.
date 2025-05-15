#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Book{
    private:
        int nameLength;
        int pageCount;

    public:
        Book(int N, int M){
            nameLength = N;
            pageCount = M;
        }
        bool operator () (pair<string, int>& book){
            return book.first.length() > nameLength and book.second > pageCount; 
        }
};

int main()
{
    vector<pair<string, int>> Books;
    Books.push_back({"Master and Margarita", 200});
    Books.push_back({"Oblomov", 250});
    Books.push_back({"Piece and War", 800});
    Books.push_back({"Maugli", 170});
    Books.push_back({"Kolobok", 20});
    Books.push_back({"451 of Farengeits", 300});

    int minNameLength = 6;
    int minPageCount = 225;

    Book sorting(minNameLength, minPageCount);

    vector <pair<string, int>> sortBooks;

    copy_if(Books.begin(), Books.end(), back_inserter(sortBooks), sorting); 

    cout << "List of sorting books: " << endl;
    for(auto& book : sortBooks){
        cout << book.first << "\t" << book.second << endl;
    }

    return 0;
}
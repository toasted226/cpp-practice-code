#include <iostream>
using namespace std;

class Book 
{
    public:
        string title;
        string author;
        int pages;

        Book() 
        {
            title = "No title";
            author = "No author";
            pages = 0;
        }

        Book(string _title, string _author, int _pages) 
        {
            title = _title;
            author = _author;
            pages = _pages;
        }
};

int main() 
{
    Book book1("Harry Potter", "JK Rowling", 543);
    Book book2("Lord of the Rings", "Tolkein", 732);
    Book book3;

    cout << book1.title << endl;
    cout << book2.author << endl;
    cout << book3.title << endl;

    return 0;
}

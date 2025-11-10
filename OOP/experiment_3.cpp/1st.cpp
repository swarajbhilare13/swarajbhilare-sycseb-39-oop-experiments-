#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    float price;

    void accept() {
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook Title: " << title << "\nAuthor: " << author << "\nPrice: " << price << endl;
    }
};

int main() {
    Book *b = new Book;
    b->accept();
    b->display();
    delete b;
    return 0;
}

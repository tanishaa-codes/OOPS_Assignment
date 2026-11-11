
#include <iostream>
using namespace std;

class LibraryAccount {
    int availableBooks;

public:
    LibraryAccount(int books) {
        availableBooks = books;
    }

    void issueBook(int requestedBooks) {
        try {
            if (requestedBooks > availableBooks) {
                throw requestedBooks;
            }

            availableBooks -= requestedBooks;

            cout << "Books issued successfully!" << endl;
            cout << "Remaining books: "
                 << availableBooks << endl;
        }
        catch (int x) {
            cout << "Error: Not enough books available!" << endl;
            cout << "Available books: "
                 << availableBooks << endl;
        }
    }
};

int main() {
    LibraryAccount lib(10);
    int books;

    cout << "Enter number of books to issue: ";
    cin >> books;

    lib.issueBook(books);

    return 0;
}

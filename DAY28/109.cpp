#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int id;
    string title;
    bool issued;

    Book(int i, string t) {
        id = i;
        title = t;
        issued = false;
    }
};

int main() {
    vector<Book> library;
    int choice;

    while (true) {
        cout << "\n===== Library Management =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string title;

            cout << "Book ID: ";
            cin >> id;

            cin.ignore();

            cout << "Book Title: ";
            getline(cin, title);

            library.push_back(Book(id, title));

            cout << "Book Added.\n";
        }

        else if (choice == 2) {
            cout << "\nBooks:\n";

            for (auto &b : library) {
                cout << b.id << " "
                     << b.title
                     << " "
                     << (b.issued ? "Issued" : "Available")
                     << endl;
            }
        }

        else if (choice == 3) {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            for (auto &b : library) {
                if (b.id == id && !b.issued) {
                    b.issued = true;
                    cout << "Book Issued.\n";
                }
            }
        }

        else if (choice == 4) {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            for (auto &b : library) {
                if (b.id == id && b.issued) {
                    b.issued = false;
                    cout << "Book Returned.\n";
                }
            }
        }

        else
            break;
    }

    return 0;
}
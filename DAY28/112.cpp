#include <iostream>
#include <vector>
using namespace std;

class Contact {
public:
    string name;
    string phone;

    Contact(string n, string p) {
        name = n;
        phone = p;
    }
};

int main() {
    vector<Contact> contacts;
    int choice;

    while (true) {
        cout << "\n===== Contact Management =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. Display Contacts\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";

        cin >> choice;

        if (choice == 1) {
            string name, phone;

            cin.ignore();

            cout << "Name: ";
            getline(cin, name);

            cout << "Phone: ";
            getline(cin, phone);

            contacts.push_back(Contact(name, phone));
        }

        else if (choice == 2) {
            string name;

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name);

            bool found = false;

            for (auto &c : contacts) {
                if (c.name == name) {
                    cout << c.name << " " << c.phone << endl;
                    found = true;
                }
            }

            if (!found)
                cout << "Contact Not Found\n";
        }

        else if (choice == 3) {
            for (auto &c : contacts)
                cout << c.name << " " << c.phone << endl;
        }

        else if (choice == 4) {
            string name;

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name);

            for (auto it = contacts.begin(); it != contacts.end(); it++) {
                if (it->name == name) {
                    contacts.erase(it);
                    cout << "Deleted\n";
                    break;
                }
            }
        }

        else
            break;
    }

    return 0;
}
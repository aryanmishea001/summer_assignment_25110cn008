#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    int accNo;
    string name;
    double balance;

    Account(int a, string n, double b) {
        accNo = a;
        name = n;
        balance = b;
    }
};

int main() {
    vector<Account> accounts;
    int choice;

    while (true) {
        cout << "\n===== Bank System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Accounts\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            int acc;
            string name;
            double bal;

            cout << "Account No: ";
            cin >> acc;

            cin.ignore();

            cout << "Name: ";
            getline(cin, name);

            cout << "Opening Balance: ";
            cin >> bal;

            accounts.push_back(Account(acc, name, bal));
        }

        else if (choice == 2) {
            int acc;
            double amt;

            cout << "Account No: ";
            cin >> acc;

            cout << "Amount: ";
            cin >> amt;

            for (auto &a : accounts) {
                if (a.accNo == acc) {
                    a.balance += amt;
                    cout << "Deposit Successful\n";
                }
            }
        }

        else if (choice == 3) {
            int acc;
            double amt;

            cout << "Account No: ";
            cin >> acc;

            cout << "Amount: ";
            cin >> amt;

            for (auto &a : accounts) {
                if (a.accNo == acc) {
                    if (a.balance >= amt) {
                        a.balance -= amt;
                        cout << "Withdrawal Successful\n";
                    } else {
                        cout << "Insufficient Balance\n";
                    }
                }
            }
        }

        else if (choice == 4) {
            for (auto &a : accounts) {
                cout << a.accNo << " "
                     << a.name << " "
                     << a.balance << endl;
            }
        }

        else
            break;
    }

    return 0;
}
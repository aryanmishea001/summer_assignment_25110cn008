#include <iostream>
#include <vector>
using namespace std;

class Ticket {
public:
    int seat;
    string name;
    bool booked;

    Ticket(int s) {
        seat = s;
        booked = false;
    }
};

int main() {
    vector<Ticket> tickets;

    for (int i = 1; i <= 10; i++)
        tickets.push_back(Ticket(i));

    int choice;

    while (true) {
        cout << "\n===== Ticket Booking =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Display Seats\n";
        cout << "4. Exit\n";
        cin >> choice;

        if (choice == 1) {
            int seat;
            cout << "Seat Number: ";
            cin >> seat;

            if (seat >= 1 && seat <= 10 && !tickets[seat - 1].booked) {
                cin.ignore();

                cout << "Passenger Name: ";
                getline(cin, tickets[seat - 1].name);

                tickets[seat - 1].booked = true;

                cout << "Ticket Booked.\n";
            }
            else {
                cout << "Seat Not Available\n";
            }
        }

        else if (choice == 2) {
            int seat;
            cout << "Seat Number: ";
            cin >> seat;

            if (seat >= 1 && seat <= 10) {
                tickets[seat - 1].booked = false;
                tickets[seat - 1].name = "";
                cout << "Cancelled.\n";
            }
        }

        else if (choice == 3) {
            for (auto &t : tickets) {
                cout << "Seat " << t.seat << " : ";

                if (t.booked)
                    cout << t.name;
                else
                    cout << "Available";

                cout << endl;
            }
        }

        else
            break;
    }

    return 0;
}
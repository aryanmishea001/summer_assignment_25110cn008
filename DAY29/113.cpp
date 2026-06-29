#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int choice;
    double a, b;

    do {

        cout << "\n===== MENU DRIVEN CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Power\n";
        cout << "7. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        if(choice>=1 && choice<=6)
        {
            cout<<"Enter Two Numbers: ";
            cin>>a>>b;
        }

        switch(choice)
        {
            case 1:
                cout<<"Result = "<<a+b;
                break;

            case 2:
                cout<<"Result = "<<a-b;
                break;

            case 3:
                cout<<"Result = "<<a*b;
                break;

            case 4:
                if(b!=0)
                    cout<<"Result = "<<a/b;
                else
                    cout<<"Division by Zero!";
                break;

            case 5:
                cout<<"Result = "<<(int)a%(int)b;
                break;

            case 6:
                cout<<"Result = "<<pow(a,b);
                break;

            case 7:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(choice!=7);

    return 0;
}
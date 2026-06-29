#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string str;
    int choice;

    cin.ignore();

    cout<<"Enter String: ";
    getline(cin,str);

    do{

        cout<<"\n===== STRING OPERATIONS =====\n";
        cout<<"1. Display String\n";
        cout<<"2. Find Length\n";
        cout<<"3. Reverse String\n";
        cout<<"4. Convert to Uppercase\n";
        cout<<"5. Convert to Lowercase\n";
        cout<<"6. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<str<<endl;
                break;

            case 2:
                cout<<"Length = "<<str.length()<<endl;
                break;

            case 3:
            {
                string temp=str;
                reverse(temp.begin(),temp.end());
                cout<<"Reverse = "<<temp<<endl;
                break;
            }

            case 4:
            {
                string temp=str;
                for(char &c:temp)
                    c=toupper(c);

                cout<<temp<<endl;
                break;
            }

            case 5:
            {
                string temp=str;
                for(char &c:temp)
                    c=tolower(c);

                cout<<temp<<endl;
                break;
            }

            case 6:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(choice!=6);

    return 0;
}
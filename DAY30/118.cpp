#include <iostream>
using namespace std;

const int MAX = 100;

string book[MAX];
bool issued[MAX];
int total = 0;

void addBook()
{
    cin.ignore();

    cout<<"Enter Book Name: ";
    getline(cin, book[total]);

    issued[total]=false;
    total++;

    cout<<"Book Added.\n";
}

void displayBooks()
{
    if(total==0)
    {
        cout<<"No Books Available.\n";
        return;
    }

    cout<<"\nBooks List\n";

    for(int i=0;i<total;i++)
    {
        cout<<i+1<<". "<<book[i];

        if(issued[i])
            cout<<" (Issued)";
        else
            cout<<" (Available)";

        cout<<endl;
    }
}

void issueBook()
{
    int n;

    cout<<"Enter Book Number: ";
    cin>>n;

    if(n<1 || n>total)
    {
        cout<<"Invalid Book Number\n";
        return;
    }

    if(issued[n-1])
        cout<<"Already Issued\n";
    else
    {
        issued[n-1]=true;
        cout<<"Book Issued Successfully\n";
    }
}

void returnBook()
{
    int n;

    cout<<"Enter Book Number: ";
    cin>>n;

    if(n<1 || n>total)
    {
        cout<<"Invalid Book Number\n";
        return;
    }

    issued[n-1]=false;

    cout<<"Book Returned Successfully\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n1.Add Book";
        cout<<"\n2.Display Books";
        cout<<"\n3.Issue Book";
        cout<<"\n4.Return Book";
        cout<<"\n5.Exit";

        cout<<"\nChoice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                issueBook();
                break;

            case 4:
                returnBook();
                break;

            case 5:
                cout<<"Thank You";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(choice!=5);

    return 0;
}
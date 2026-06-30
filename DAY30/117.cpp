#include <iostream>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
float marks[MAX];
int total = 0;

void addStudent()
{
    if(total == MAX)
    {
        cout << "Student limit reached.\n";
        return;
    }

    cout << "Enter Roll No: ";
    cin >> roll[total];

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[total]);

    cout << "Enter Marks: ";
    cin >> marks[total];

    total++;

    cout << "Student Added Successfully.\n";
}

void displayStudents()
{
    if(total==0)
    {
        cout<<"No Records Found.\n";
        return;
    }

    cout<<"\nRoll\tName\tMarks\n";

    for(int i=0;i<total;i++)
    {
        cout<<roll[i]<<"\t"<<name[i]<<"\t"<<marks[i]<<endl;
    }
}

void searchStudent()
{
    int r;
    cout<<"Enter Roll Number: ";
    cin>>r;

    for(int i=0;i<total;i++)
    {
        if(roll[i]==r)
        {
            cout<<"Name : "<<name[i]<<endl;
            cout<<"Marks: "<<marks[i]<<endl;
            return;
        }
    }

    cout<<"Student Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n1.Add Student";
        cout<<"\n2.Display Students";
        cout<<"\n3.Search Student";
        cout<<"\n4.Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout<<"Thank You";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(choice!=4);

    return 0;
}
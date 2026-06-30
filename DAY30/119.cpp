#include <iostream>
using namespace std;

const int MAX=100;

int id[MAX];
string name[MAX];
float salary[MAX];
int total=0;

void addEmployee()
{
    cout<<"Enter Employee ID: ";
    cin>>id[total];

    cin.ignore();

    cout<<"Enter Name: ";
    getline(cin,name[total]);

    cout<<"Enter Salary: ";
    cin>>salary[total];

    total++;

    cout<<"Employee Added.\n";
}

void displayEmployee()
{
    if(total==0)
    {
        cout<<"No Employee Records.\n";
        return;
    }

    cout<<"\nID\tName\tSalary\n";

    for(int i=0;i<total;i++)
    {
        cout<<id[i]<<"\t"<<name[i]<<"\t"<<salary[i]<<endl;
    }
}

void searchEmployee()
{
    int x;

    cout<<"Enter Employee ID: ";
    cin>>x;

    for(int i=0;i<total;i++)
    {
        if(id[i]==x)
        {
            cout<<"Name : "<<name[i]<<endl;
            cout<<"Salary : "<<salary[i]<<endl;
            return;
        }
    }

    cout<<"Employee Not Found\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n1.Add Employee";
        cout<<"\n2.Display Employees";
        cout<<"\n3.Search Employee";
        cout<<"\n4.Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployee();
                break;

            case 3:
                searchEmployee();
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
#include <iostream>
using namespace std;

int main() {

    int arr[100], n, choice;

    cout<<"Enter Size: ";
    cin>>n;

    cout<<"Enter Elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    do{

        cout<<"\n===== ARRAY OPERATIONS =====\n";
        cout<<"1. Display Array\n";
        cout<<"2. Search Element\n";
        cout<<"3. Find Maximum\n";
        cout<<"4. Find Minimum\n";
        cout<<"5. Sum of Elements\n";
        cout<<"6. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                for(int i=0;i<n;i++)
                    cout<<arr[i]<<" ";
                cout<<endl;
                break;

            case 2:
            {
                int key;
                bool found=false;

                cout<<"Enter Element: ";
                cin>>key;

                for(int i=0;i<n;i++)
                {
                    if(arr[i]==key)
                    {
                        cout<<"Found at Index "<<i<<endl;
                        found=true;
                        break;
                    }
                }

                if(!found)
                    cout<<"Element Not Found\n";

                break;
            }

            case 3:
            {
                int max=arr[0];

                for(int i=1;i<n;i++)
                    if(arr[i]>max)
                        max=arr[i];

                cout<<"Maximum = "<<max<<endl;
                break;
            }

            case 4:
            {
                int min=arr[0];

                for(int i=1;i<n;i++)
                    if(arr[i]<min)
                        min=arr[i];

                cout<<"Minimum = "<<min<<endl;
                break;
            }

            case 5:
            {
                int sum=0;

                for(int i=0;i<n;i++)
                    sum+=arr[i];

                cout<<"Sum = "<<sum<<endl;
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
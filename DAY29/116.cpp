#include <iostream>
#include <vector>
using namespace std;

class Item
{
public:
    int id;
    string name;
    int quantity;
    double price;
};

int main()
{
    vector<Item> inventory;

    int choice;

    do
    {
        cout<<"\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout<<"1. Add Item\n";
        cout<<"2. Display Items\n";
        cout<<"3. Search Item\n";
        cout<<"4. Delete Item\n";
        cout<<"5. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                Item item;

                cout<<"Enter Item ID: ";
                cin>>item.id;

                cin.ignore();

                cout<<"Enter Item Name: ";
                getline(cin,item.name);

                cout<<"Enter Quantity: ";
                cin>>item.quantity;

                cout<<"Enter Price: ";
                cin>>item.price;

                inventory.push_back(item);

                cout<<"Item Added Successfully.\n";
                break;
            }

            case 2:
            {
                if(inventory.empty())
                {
                    cout<<"Inventory Empty.\n";
                }
                else
                {
                    for(Item i:inventory)
                    {
                        cout<<"ID: "<<i.id
                            <<" Name: "<<i.name
                            <<" Quantity: "<<i.quantity
                            <<" Price: "<<i.price<<endl;
                    }
                }
                break;
            }

            case 3:
            {
                int id;
                bool found=false;

                cout<<"Enter Item ID: ";
                cin>>id;

                for(Item i:inventory)
                {
                    if(i.id==id)
                    {
                        cout<<"Name: "<<i.name<<endl;
                        cout<<"Quantity: "<<i.quantity<<endl;
                        cout<<"Price: "<<i.price<<endl;
                        found=true;
                    }
                }

                if(!found)
                    cout<<"Item Not Found.\n";

                break;
            }

            case 4:
            {
                int id;
                bool deleted=false;

                cout<<"Enter Item ID: ";
                cin>>id;

                for(int i=0;i<inventory.size();i++)
                {
                    if(inventory[i].id==id)
                    {
                        inventory.erase(inventory.begin()+i);
                        deleted=true;
                        break;
                    }
                }

                if(deleted)
                    cout<<"Item Deleted.\n";
                else
                    cout<<"Item Not Found.\n";

                break;
            }

            case 5:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(choice!=5);

    return 0;
}
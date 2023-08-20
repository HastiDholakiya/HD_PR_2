#include<iostream>
using namespace std;

class Supermarket_Billing_System{
	private:
		string userId;
        string password;
		int item_number;
        string item_name;
        int quantity;
        int price;
        float discount;
         
    public:
    	Supermarket_Billing_System() 
	   {
            userId = "Hasti";
            password = "12345";
       }
    
        UserData() 
		{
            string Id;
			string Pass;
            
            cout << "Enter User ID: ";
            cin >> Id;
            cout << "Enter Password: ";
            cin >> Pass;
            
            if (Id == userId && Pass == password)
			{
            cout << "UserId and Password are valid.... " << endl;
            } else 
			{
            cout << " Invalid UserId and Password..." << endl;
            exit(0);
            }
            
        }

    	
    	InputItemDetails()
    	{
    		cout << "Enter item number : ";
    		cin >> item_number;
    		cout << "Enter item name : ";
    		cin >> item_name;
    		cout << "Enter quantity : ";
    		cin >> quantity;
    		cout << "Enter price : ";
    		cin >> price;
    		cout << "Enter discount : ";
    		cin >> discount;
		}
		
		getData()
		{
			cout << "Item number : " << item_number << endl;
			cout << "Item name : " << item_name << endl;
			cout << "Quantity : " << quantity << endl;
			cout << "Price : " << price << endl;
			cout << "Discount : " << discount << endl;

		}
		
		
		calculate_Total_Bill() 
		{
			int total;
			
            total = (price * quantity) - discount;
            
            cout << "Total Bill: " << total << endl;
        }

};

int main()
{
	Supermarket_Billing_System Bill;
	
	{
		Bill.UserData();
		Bill.InputItemDetails();
		Bill.getData();
		Bill.calculate_Total_Bill();
		
	}
	return 0;
}

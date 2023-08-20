#include<iostream>
using namespace std;

class Person
{
	public:
	string name;
	long account_number;
	string phone_number;
	string email;
};

class Bank
{
	private:
		Person logg_in_user;
		double account_balance = 100000;
		
	public:
		clearScreen()
		{
			system("cls");
			system("clear");
		}
		display_introduction_screen()
		{
			clearScreen();
			cout << endl << endl << endl;
			cout << " -: BANK MANAGEMENT SYSTEM :- " << endl;
			cout << " ---------------------------- " << endl << endl;
			cout << " -: Design & Programed By :- " << endl;
			cout << " ---------------------------- " << endl;
			cout << "       Hasti Dholakiya        " << endl << endl << endl;
			cout << " ---------------------------- " << endl;
			cout << "Press Any Key N Enter To Continue..." << endl;
			cin.get();

		}
		display_login_screen()
		{
			clearScreen();
			cout << endl << endl << endl;
			cout << "********************************" << endl;
			cout << "         WELCOME TO SBI         " << endl;
			cout << "********************************" << endl;
			cout << "********************************" << endl;
			cout << "   Press A TO Login as Admin    " << endl;
			cout << "   Press s TO Login as Staff    " << endl;
			cout << "********************************" << endl;

            char choice;
            
            cin >> choice;
            return choice;

		}
		
		display_admin_login_screen()
		{
			clearScreen();
			cout << "********************************" << endl;
			cout << "*         Admin Login          *" << endl;
			cout << "********************************" << endl;

		}
		
		display_staff_login_screen()
		{
			clearScreen();
			cout << "********************************" << endl;
			cout << "*         Staff Login          *" << endl;
			cout << "********************************" << endl;
			
		}
		
		loggin_as_staff()
		{
		display_staff_login_screen();
		cout << "Enter name : ";
		cin >> logg_in_user.name;
		cout << "Enter account number : ";
		cin >> logg_in_user.account_number;
		cout << "Enter phone number : ";
		cin >> logg_in_user.phone_number;
		cout << "Enter email : ";
		cin >> logg_in_user.email;
		}
		
		loggin_as_admin()
		{
		display_admin_login_screen();
		cout << "Enter name : ";
		cin >> logg_in_user.name;
		cout << "Enter account number : ";
		cin >> logg_in_user.account_number;
		cout << "Enter phone number : ";
		cin >> logg_in_user.phone_number;
		cout << "Enter email : ";
		cin >> logg_in_user.email;
		}
		
		display_user_information()
		{
		cout << endl << "Name : " << this->logg_in_user.name << endl;
		cout << "Account number : " << this->logg_in_user.account_number << endl;
		cout << "Phone number : " << this->logg_in_user.phone_number << endl;
		cout << "Email : " << this->logg_in_user.email << endl << endl << endl;
		}
		
		display_options()
		{
		cout << "********************************" << endl;
		cout << "*           Options            *" << endl;
		cout << "********************************" << endl;
		cout << "*  1.Deposit Money             *" << endl;
		cout << "*  2.Transfer Money            *" << endl;
		cout << "*  3.Withdraw Money            *" << endl;
		cout << "*  4.Exit                      *" << endl;
		cout << "********************************" << endl << endl << endl;
		cout << "Current Balance : " << account_balance << endl;	
		}
		
		Deposit()
		{
		clearScreen();
		cout << endl << endl << endl;
		cout << "********************************" << endl;
		cout << "*         Deposit Money        *" << endl;
		cout << "********************************" << endl << endl;
		cout << "Current Balance : " << account_balance << endl;	
		cout << endl << "Enter the amount to deposit : ";
		
		double amount;
		cin >> amount;
		
		    if(amount <= 0)
		    {
			    cout << "Invalid amount..." << endl;
		    }
		    else
		    {
		    account_balance += amount;
		    cout << endl << "Deposit successful..." << endl << endl;
		    cout << "Current balance : " << account_balance << endl << endl;	
		    }
		}
		
		Transfer()
		{
		clearScreen();
		cout << endl << endl << endl;
		cout << "********************************" << endl;
		cout << "*        Transfer Money        *" << endl;
		cout << "********************************" << endl << endl;
		cout << "Current Balance : " << account_balance << endl;	
		cout << "Enter the amount to transfer : ";
		
		double amount;
		cin >> amount;
		
		    if(amount <= 0)
		    {
			    cout << "Invalid amount..." << endl;
		    }
		    else if(amount > account_balance)
		    {
		    	cout << "Insufficient funds..." << endl;
			}
			else
			{
				account_balance -= amount;
		        cout << endl << "Transfer successful..." << endl << endl;
		        cout << "Current balance : " << account_balance << endl << endl;
			}	
		}
		
		Withdraw()
		{
		clearScreen();
		cout << endl << endl << endl;
		cout << "********************************" << endl;
		cout << "*        Withdraw Money        *" << endl;
		cout << "********************************" << endl << endl;
		cout << "Current Balance : " << account_balance << endl;	
		cout << "Enter the amount to withdraw  : ";
		
		double amount;
		cin >> amount;
		
		    if(amount <= 0)
		    {
			    cout << "Invalid amount..." << endl;
		    }
		    else if(amount > account_balance)
		    {
		    	cout << "Insufficient funds..." << endl;
			}
			else
			{
				account_balance -= amount;
		        cout << endl << "Withdrawal successful..." << endl << endl;
		        cout << "Current balance : " << account_balance << endl << endl;
			}	
		}
		
};

int main()
{
	Bank bank;
	
	bank.display_introduction_screen();
	
	char loginChoice;
	
	while(true)
	{
		bank.clearScreen();
		loginChoice = bank.display_login_screen();
		if(loginChoice == 'S' || loginChoice == 's')
		{
			bank.display_staff_login_screen();
			bank.loggin_as_staff();
			break;
		}
		else if(loginChoice == 'A' || loginChoice == 'a')
		{
			bank.display_admin_login_screen();
			bank.loggin_as_admin();
			break;
		}
	}
	
	while(true)
	{
		bank.clearScreen();
		cout << endl << endl << "User Information : " << endl;
		bank.display_user_information();
		bank.display_options();
		
		int option;
		cout << endl << endl << "Select an option : ";
		cin >> option;
		
		switch(option)
		{
			case 1:
				bank.Deposit();
				break;
			case 2:
				bank.Transfer();
				break;
			case 3:
				bank.Withdraw();
				break;
			case 0:
				cout << "Exiting the Bank System..." << endl;
				return 0;
			default:
				cout << "Invalid option..." << endl;
		}
		cout << "Press any key to continue...";
		cin.get();
		cin.ignore();
	}
	return 0;
}

#include <iostream>
using namespace std;

class Train {
private:
    int train_number;
    string train_name;
    string source;
    string destination;
    string train_time;

public:
    Train()
	{
        cout << "\nEnter Train Number: ";
        cin >> train_number;
        cout << "Enter Train Name: ";
        cin >> train_name;
        cout << "Enter Source: ";
        cin >> source;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Train Time: ";
        cin >> train_time;
    }

    get_Train_Details() 
	{
        cout << "\n\n Train Number: " << train_number << endl;
        cout << "Train Name: " << train_name << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << train_time << endl;
    }
    
    searchingTrainnumber(int search, int numberOfTrain)
    {
    	int bug=0;
    	
    	if(train_number == search)
    	{
		   get_Train_Details() ;
		}
		else
		{
			bug++;
		}
		
		if(bug > numberOfTrain-2)
		{
			cout << "\n Invalid Train Number...";
		}
	}
    
};

int main()
{
    int n;
    
    cout << "Enter details number of train : ";
    cin >> n;
    
    if(n<3)
    {
    	cout << "Atleast enter 3 train details...";
	}
	else
	{
		int i;
		int searchTrainNumber;
		Train t[n];
		
		cout << "\n\n Search of Train Number : ";
		cin >> searchTrainNumber;
		
		for(i=0;i<n;i++)
		{
			t[i].searchingTrainnumber(searchTrainNumber,n);
		}
	}

    return 0;
}





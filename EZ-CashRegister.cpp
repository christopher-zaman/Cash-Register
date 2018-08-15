#include <iostream>

using namespace std;

int main() 
{
	double total = 0;
	int numSales = 0;

	while(true)
	{
		cout << "Welcome to Cash Register 1.0" << endl;
		cout << "1- New Sale" << endl;
		cout << "2- Cash Out" << endl;
		cout << "3- Cash In" << endl;
		cout << "4- Report" << endl;
		cout << "0- Exit" << endl;

		int choice; 
		cout << "What do you want to do? ";
		cin >> choice;

		if (choice < 0 || choice > 4) 
		{
			cout << "Dude.. choose a proper option. " << endl;
		}

		if (choice == 0) 
		{
			break;
		}

		if (choice == 1)
		{
			numSales += 1;

			int itemCount;
			cout << "How many items in this sale? ";
			cin >> itemCount;

			for(int i=1; i <= itemCount; i++) 
			{
				int barcode;
				cout << "Product #" << i << " Code: ";
				cin >> barcode;

				double saleCost;

				if (barcode < 100) 
				{
					double unitPrice;
					cout << "Price/Pound: ";
					cin >> unitPrice;

					double weight;
					cout << "Weight: ";
					cin >> weight;

					saleCost = unitPrice * weight;
				}  else  {
					cout << "Item Price: ";
					cin >> saleCost;
					saleCost = saleCost * 1.1;
				}

				total += saleCost;
				cout << "Your total today is " << saleCost << endl;
				cout << "The total of the register is " << total << endl;
				cout << "Come again!" << endl;
			}
		}

		if (choice == 2)
		{
			double cashout; 
			cout << "Cash Out Amount:";
			cin >> cashout;
			total -= cashout;
			cout << "Total after Cashout: " << total << endl;
		}

		if (choice == 3)
		{
			double cashin; 
			cout << "Cash In Amount:";
			cin >> cashin;
			total += cashin;
			cout << "Total after Cash In: " << total << endl;
		}
		
		if (choice == 4)
		{		
			cout << "# of Sales is " << numSales << "." << endl;
			cout << "Total is $" << total << "." << endl;
		}

	}


	system("pause");
	return 0;
}
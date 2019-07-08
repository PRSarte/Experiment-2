#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float cons, gallon, pgallon, balance;

	cout << "I can calculate the customer's monthly bill." << endl;
	cout <<	"Please place the number of gallons used by the customer: ";  
	cout << (cin >> gallon,gallon) << " gallons" << endl;

	cout << "Is there previous gallons consumed? if so please state how many gallons: ";
	cout << (cin >> pgallon,pgallon) << " gallons" << endl;
	//outputs and asks for input of gallons

	cons = gallon + pgallon;
	balance = 35 + 1.10 * cons;
	//formulas

if(pgallon > 0 && gallon > 0) //command that chooses whether or not there is an additional payment to be made or there is an invalid input.
	{
		cout << "The water bill is: " << balance + 20 << " Pesos";
	}

else if(gallon == 0 || pgallon == 0)
	{
		cout << "The water bill is: " << balance << " Pesos";
	}
else 
	{	
		cout << "Invalid input!";
	}

getch ();
return 0;
}
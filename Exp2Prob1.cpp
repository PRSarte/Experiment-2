#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int hour, packA, rateA, packB, rateB, packC;
	char pack;
	bool abort = false;
	packA = 995;
	packB = 1495;
	packC = 1995;

	do 
	{

		cout << "I will calculate the customer's monthly bill." << endl;
		cout << "What package did the customer take? ";
		cin >> pack;

		switch (pack) //loop Code block that assesses if pack a ,b , c or an invalid input is made.
		{
		case 'A':
		case 'a':
			{
				cout << "How many hours has the customer used? ";
				cin >> hour;
		
				rateA = 20 * (hour - 10);
				if (hour <=10)
				{
					cout << "Your monthly bill will be 995 pesos." << endl;
				}
				else
				{
					cout << " Your bill will be " << packA + rateA << "pesos." << endl;
				}
				abort = true;
			}

			break;
		case 'B':
		case 'b':
			{
				cout << "How many hours has the customer used? ";
				cin >> hour;
		
				rateB = 10 * (hour - 20);
				if (hour <=20)
				{
					cout << "Your monthly bill will be 1495 pesos." << endl;
				}
				else
				{
					cout << " Your bill will be " << packB + rateB << "pesos." << endl;
				} 

			}
			break;
		case 'C':
		case 'c':
			{
				cout << " Your bill will be 1995 pesos." << endl;
			}
		default: 
			{
				cout << " There is only 3 packages, please choose from A, B or C." << endl;
			}
			continue;
		}
	}
	while (!abort);
_getch ();
return 0;
}
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
	int x, y;
	double V, z;
	z = 2.5;

	cout << "I will find the value of V for you" << endl;
	cout << "Enter your X value ";
	cin >> x;
	cout << " Now enter your Y value ";
	cin >> y;
	cout << endl;
	switch (x) //differentiates formulas used based on x and y values.
	{
	case 1:
		{
			if ( 1 < y < 5 )
			{
				V = x*y*z;
				cout << setw (10);
				cout << fixed << showpoint << setprecision (2);
				cout << "The value of V is: " << V;
			}

			else if ( y >= 5 )
			{
				V = x + y / z;
				cout << setw (10);
				cout << fixed << showpoint << setprecision (2);
				cout << "The value of V is: " << V;
			}
		}
		break;
	case 2:
		{
			if ( y <= 5 )
			{
				V = abs(( x - y) / z);
				cout << setw (10);
				cout << fixed << showpoint << setprecision (2);
				cout << "The value of V is : " << V;
			}
			else if (y > 5)
			{	
				V = x - sqrt(double (y + z));
				cout << setw (10);
				cout << fixed << showpoint << setprecision (2);
				cout << "The value of V is : " << V;
			}
		}
		break; 
	default:
		{
			V = x + y + z;
			cout << setw (10);
			cout << fixed << showpoint << setprecision (2);
			cout << "The value of V is : " << V;
		}
		break;
	}
	_getch ();
	return 0;
}
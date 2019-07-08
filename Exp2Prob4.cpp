#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int num, counter;
	cout << "Counting from 1 to 10 then by twos from 10 to 30..." << endl;

	 for ( num = 1; num <= 10; num++ )
	 {
		 cout << num << ",";
	 } // outputs a count from 1 to 10
		 for ( num > 10; num <= 29; num++ )
		{
			counter = num % 2;
			if (counter==0)
			{
				cout << num << ",";
			}
		} // outputs counting skipping twos til 28 but i didnt want to add a "," so I cout num 30.

	 cout << num ;

	_getch ();
	return 0;
}
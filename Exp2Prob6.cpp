#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num, sum, n;
	
do 
{
	cout << "Enter a number: "; 
	cin >> num;
		 
		 if (num <= 0) 
		 {
			 cout << "Please enter a positive number." <<endl;
		 }

		 else 
		 {
			 sum = 0;
		 for (n = 1; n <= num; ++n)
		 {
			 sum += n;
		 }

		cout << "The sum of all whole numbers from 1 to " << num;
		cout << " is " << sum << "." << endl;
		cout << " " << endl;
		 }
}

while (num != 0 && num >=0); 
{
		cout << "Thank you for your patronage!";
}
_getch ();
return 0;
}

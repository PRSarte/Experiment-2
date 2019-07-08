#include <iostream>
#include <conio.h>

using namespace std; 

int main ()
{
	int num, a, b, c, temp;
	num = 21;
	a = 0;
	b = 1;
	cout << "These are the first 20 numbers of the Fibonacci series: " << endl;
 
   for ( c = 0 ; c < num ; c++ )
   {
      if ( c <= 1 )
         temp = c;
      else
      {
         temp = a + b;
         a = b;
         b = temp;
      }
      cout << temp << "," ; //allows a loop to form til 21 numbers are finished with the formula.
   }

	cout << "10946" << endl;

_getch ();
return 0;
}
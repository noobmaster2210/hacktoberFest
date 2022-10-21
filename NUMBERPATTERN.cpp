#include <iostream>
using namespace std;

int main()
{
   int i,j,rows;
   cout << "PATTERN IN C++ "<<endl;
   cout << " Input number of rows: ";
   cin >> rows;
    
   // LOOP FROM I=1 TILL NO.OF ROWS
   for(i=1;i<=rows;i++)
   {
       
       //AGAIN LOOP FROM J=1 TILL I
	for(j=1;j<=i;j++)
	
	   //PRINT PATTERN
	   
	   cout<<i;
	   
	cout<<endl;
   }
   
}

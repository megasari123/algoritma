#include <iostream>
using namespace std;
	long faktorial ( int a ) ;
	int main ()
{
		int b,hasil;
		cout << " masukkan angka yang akan difaktorialkan : " ;
		cin >> b ;
		hasil = faktorial ( b ) ;
	   cout << " hasil nilai faktorial dari " << b << " adalah = " << hasil << endl ;
	   		return(0);
} 
	long faktorial ( int a )
{
	int c = 0 , hasil = 1 ;
		if( a <= 1 )
	{
		return ( 1 ) ;
	 } 
	 	else
	   { 
	    for( c = 1 ; c <= a ; c++ )
	  {
	   hasil = hasil * c ;
	   }
	   		return ( hasil ) ;
 } 
}

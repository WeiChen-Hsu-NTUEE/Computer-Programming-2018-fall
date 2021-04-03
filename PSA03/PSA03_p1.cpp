// My student ID:b07901082
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main ()
{
	cout << "Term\tValue of Pi\n" ;
	int i, n ;
	float pi ;
	for (n=1 ; n<=500 ; n++)
	{
		pi = 0 ;
		for( i=1 ; i<=(2*n-1) ; i=i+2)
		{
			pi = pi + 4*pow(-1 , (i+1)/2 - 1)/i ;
		}
		cout << n << "\t" << setprecision(5) << fixed << pi << "\n" ;
	}
	
    system ("pause") ;
	return 0 ;
}


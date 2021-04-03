// My student ID:b07901082
#include<iostream>
using namespace std;

int main( )
{
	int a=1 , b=1 , i=0, x ;
	double n, y;	
	cout << "n = " ;
	cin >> n ;
	x=n;
	y=n-x;
	if((n-x)!=0) cout<<"illegal";
	if ( n<1 || n>40 ) 
	{
	    cout << "Illegal input ! Please enter an integer in the range [1 , 40]" << endl; 
    }
	else 
	{
	    cout << "The first " << n << " elements of the Fibonacci sequence are:" << "\n" << endl;
		if(n == 1) cout << 1;
		if(n == 2) cout << 1 << ", " << 1; 
		if(n>=3 && n<=40)
		{
		    cout << 1 << ", " << 1 << ", " ;
			while(i<=n-4)
		    {
			    a = a+b;
			    cout << a << ", " ;
			    i=i+1;
			    if(i<=n-4)
			    {
			        b = a+b;
			        cout << b << ", " ;
			        i=i+1;
		        }
			}
			a = a + b; cout << a;
	    }
    }
	return 0;
}

// My student ID:b07901082
#include<iostream>
using namespace std;

int main( )
{
	int n,a,b;	
	cout << "n = ";
	cin >> n;
	double matrix[n][n];
	for(a=0;a<=n-1;a++)
	{
		for(b=0;b<=n-1;b++)
		{
			cout << "Please enter the value of matrix[" << a << "]["<< b << "] = "  ;
			cin >> matrix[a][b] ;
			cout << "\n";
		}
	}
	for(a=0;a<=n-1;a++)
	{
		for(b=0;b<=n-1;b++)
		{
			cout << matrix[a][b] << " ";
		}
		cout << "\n";
	}
	// angle = 90¢X
	cout << "Angle = 90¢X:" << endl;
	
	for(b=0;b<=2;b++)
	{
		for(a=2;a>=0;a--)
		{
			cout << matrix[a][b] << " ";
		}
		cout << "\n";
	}
	
	// angle = 180¢X
	cout << "Angle = 180¢X:" << endl;
    
    for(a=2;a>=0;a--)
    {
    	for(b=2;b>=0;b--)
    	{
    		cout << matrix[a][b] << " ";
		}
		cout << "\n";
	}
	 
	// angle = 270¢X
	cout << "Angle = 270¢X:" << endl;
    
	for(b=2;b>=0;b--)
	{
		for(a=0;a<=2;a++)
		{
			cout << matrix[a][b] << " ";
		}
		cout << "\n";
	}
	
	system ("pause");
	return 0;
}

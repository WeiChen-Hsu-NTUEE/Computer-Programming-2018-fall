#include <iostream>
using namespace std;

int main() {
	
	cout << "Please enter 10 integers:" << endl;

	// Sort the 10 input integers
	int a[10] , b[10]  , i , j , k , n , c ;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	int x , y;
	for(j=9;j>0;j--)
	{
	
    k=a[0] ; n=0;
	for(i=0;i<j;i++)
	{
		
		y = a[i+1];
		if(k < y)
		{
			k = y;
			n = i+1;
		}
	
		
		
	}
    	c = a[n] ;
		a[n] = a[i] ;
		a[i] = c ; 
	}
	cout << "The sorting result is:" << endl;
	for(i=0 ; i<10 ; i++)
	{
		cout<<a[i]<<"\t";
	}
	
	
	

	

	return 0;
}

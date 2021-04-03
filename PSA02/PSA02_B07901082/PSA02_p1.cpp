// My student ID: b07901082 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{	
	double a,b,c;
	cout <<"Please enter three numbers:"  << endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cout <<"Please enter the output precision:"  << endl;		
	int x;
	cin >>x;
	cout <<"average = "<<setprecision(x)<<(a+b+c)/3 << endl;
	
	return 0;
}

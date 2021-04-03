// My student ID: b07901082
#include<iostream>
using namespace std;

int main()
{
	int x;
	cout << "input:";
	cin >> x;
	if((0<=x&&x<=31)||x==127) cout<<"It's a contrl char."<<endl;
	if(32<=x&&x<=126) cout<<char(x)<<endl;
	if(x<0||x>127) cout<<"Input error!"<<endl;
	
	return 0;
}

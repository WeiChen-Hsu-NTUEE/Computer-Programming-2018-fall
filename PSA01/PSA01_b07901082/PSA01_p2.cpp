// My student ID: b07901082
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a = 777;
	double b = 3.14159;
	
	/* 
	Required output
	####################################################
	#             Value of A: 777                      #
	# Hexadecimal value of A: 309                      #
	#       Octal value of A: 1411                     #
	#             Value of B: 3.14                     #
	####################################################
	*/
	
	cout<<"####################################################"<< endl;
	cout<<"#"<<setw(25)<<right<<"Value of A: "<<setw(25)<<left<<a<<"#"<<endl;
    cout<<"#"<<setw(25)<<right<<"Hexadecimal value of A: "<<setw(25)<<left<<hex<<a<<"#"<<endl;
	cout<<"#"<<setw(25)<<right<<"Octal value of A: "<<setw(25)<<left<<oct<<a<<"#"<<endl;
	cout<<"#"<<setw(25)<<right<<"Value of B: "<<setw(25)<<left<<setprecision(3)<<b<<"#"<<endl;
	cout<<"####################################################"<< endl;
	
	return 0;
}


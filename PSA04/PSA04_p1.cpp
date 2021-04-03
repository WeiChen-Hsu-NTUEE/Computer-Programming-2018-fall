#include <iostream>
using namespace std;

int main() 
{
	int i , j ;
	int data_height,data_width;
	int **data;
	
	cout << "data_height, data_width = ";
	cin >> data_height >> data_width;
	data = new int * [data_height];
    for (i=0 ; i<data_height ; i++) data[i] = new int [data_width] ;
    for(i=0 ; i<data_height ; i++)
    {
    	for(j=0 ; j<data_width ; j++)
    	{
    		data[i][j] = i * data_width + j ;
    		cout<<data[i][j]<<"\t" ;
		}
		cout<<"\n" ;
	}
	
	for(i=0 ; i<data_height ; i++) delete [] data [i] ;
	delete [] data ;










	/* 
	TODO
	1: create a dynamic array with dimension height*width
	2: assign value to each array elements
	3: print (cout) out the array, seperate elements in a row with a '\t'
	4: delete the array
	*/
	
	return 0;
}

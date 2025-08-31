#include <iostream>
using namespace std;


int main() {
	int array[5];
	int sum=0;
	int avg;
	cout<<"Enter 5 numbers one by one"<<endl;

	for ( int i=0 ; i<5 ; i++)
	{
		cout<<"Enter array element "<<i<<" : ";
		cin>>array[i];
	}
	
	for ( int i=0 ; i<5 ; i++)
	{
		sum+=array[i];
	}
	
	avg=sum/5;
	
	cout<<"The sum of all elements is       : "<<sum<<endl;
	cout<<"The Average of all elements is   : "<<avg<<endl;
	

    return 0;
}


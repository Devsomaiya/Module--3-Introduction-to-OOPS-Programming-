#include<iostream>

using namespace std;

int main()
{
	int number;
	int range;
	
	cout<<"Enter a Number : ";
	cin>>number;
	
	cout<<"Enter A Range  :";
	cin>>range;
	
	for(int i=1 ; i<=range; i++)
	{
		cout<<number<<" * "<<i<<" = "<<number*i<<endl;
	}



	return 0;
}


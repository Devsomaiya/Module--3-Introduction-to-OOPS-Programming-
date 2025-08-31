#include<iostream>

using namespace std;
int factorial     (int n,int *invalid_input);


int main()
{
	int num;
	int fact;
	int invalid_input;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	fact=factorial(num,&invalid_input);
	
	if (fact>=1)
	{
		cout<<"The Factorial of the number "<<num<<" is  : "<<fact<<endl;	
	}
	return 0;
}

int factorial   (int n,int *invalid_input)
{
	
	if(n==0 || n==1)
	{
		return 1;
	}
	
	else if(n>1)
	{
		return n * factorial(n-1,invalid_input);
	}
	
	else{
		cout<<"Negative numbers or any other invalid inputs do not have factorial."<<endl;
		*invalid_input=0;
		return *invalid_input;
	}
}






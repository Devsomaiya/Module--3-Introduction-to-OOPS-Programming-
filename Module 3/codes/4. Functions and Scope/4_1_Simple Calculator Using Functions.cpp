#include<iostream>

using namespace std;
int add     (int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
int divide  (int n1, int n2);
int modulo  (int n1, int n2);


int main()
{
	int num1,num2;
	int result;
	char operation;
	cout<<"=======================================  This is Simple Calculator  ======================================="<<endl<<endl;
	cout<<"Enter Two numbers one by one"<<endl;
	
	cout<<"---->Enter the value of First number    : ";
	cin>>num1;

	cout<<"---->Enter the value of Second number    : ";
	cin>>num2;
	
	cout<<"Which Operation You Want to Perform (+,-,*,/,%)"<<endl;
	cin>>operation;
	
	
	switch(operation)
	{
		case '+': result=add(num1,num2);
				  cout<<"The Addition of two number is "<<result<<endl;
				  break;

		case '-': result=subtract(num1,num2);
				  cout<<"The Subtraction of two number is "<<result<<endl;
				  break;

		case '*': result=multiply(num1,num2);
				  cout<<"The Multiplication of two number is "<<result<<endl;
				  break;

		case '/': result=divide(num1,num2);
				  cout<<"The division of two number is "<<result<<endl;
				  break;

		case '%': result=modulo(num1,num2);
				  cout<<"The Modulo of two number is "<<result<<endl;
				  break;


		default : cout<<"Invalid input :"<<endl;
	}
	return 0;
}

int add     (int n1, int n2)
{
	int N;
	
	N=n1+n2;
	
	return N;
}

int subtract     (int n1, int n2)
{
	int N;
	
	N=n1-n2;
	
	return N;
}

int multiply     (int n1, int n2)
{
	int N;
	
	N=n1*n2;
	
	return N;
}

int divide     (int n1, int n2)
{
	int N;
	
	N=n1/n2;
	
	return N;
}

int modulo     (int n1, int n2)
{
	int N;
	
	N=n1%n2;
	
	return N;
}



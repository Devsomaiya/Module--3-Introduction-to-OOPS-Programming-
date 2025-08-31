#include <iostream>
using namespace std;

class Calculator{
	
	public :
	float result;
	
	void addition (int n1,int n2)
	{
		result=(float)n1+n2;
		cout<<"The addition of the two numbers is: "<<result<<endl;	
	}

	void subtraction (int n1,int n2)
	{
		result=(float)n1-n2;
		cout<<"The subtraction of the two numbers is: "<<result<<endl;	
	}

	void multiplication (int n1,int n2)
	{
		result=(float)n1*n2;
		cout<<"The multiplication of the two numbers is: "<<result<<endl;	
	}
	
	void division (int n1,int n2)
	{
		result=(float)n1/n2;
		cout<<"The division of the two numbers is: "<<result<<endl;	
	}

};



int main() {

	
	Calculator Cal_ui;
	
	int num1,num2;
	char _operator;
	
	
	cout<<"====================  This is A Simple Calculator  ===================="<<endl;
	cout<<"Enter Two number one by one: "<<endl;
	
	cout<<"Enter First number                 :";
	cin>>num1 ;
	
	cout<<"Enter Second number                :";
	cin>>num2 ;
	
	cout<<"Enter The Operation (+,-,*,/)      :";
	cin>>_operator;
	
	
	switch(_operator)
	{

		case '+': Cal_ui.addition(num1,num2);
				  break;

		case '-': Cal_ui.subtraction(num1,num2);
				  break;

		case '*': Cal_ui.multiplication(num1,num2);
				  break;

		case '/': Cal_ui.division(num1,num2);
				  break;

		default: cout<<"Invalid input .";
		
	}
	
	
    return 0;
}


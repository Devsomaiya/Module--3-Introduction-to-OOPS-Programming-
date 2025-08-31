#include<iostream>
using namespace std;

int main()
{
	const string birth_detail="15th May";
	int age;
	string name;
	string surname;
	float cgpa;
	
	cout<<"Enter Your age        : ";
	cin>>age;
	cout<<endl;
	
	cout<<"Enter Your name       : ";
	cin>>name;                            
	cout<<endl;                        

	cout<<"Enter Your surname       : ";
	cin>>surname;                            
	cout<<endl;	     
	
	cout<<"Enter Your cgpa        : ";
	cin>>cgpa;
	cout<<endl;                               

	cout<<"Your Full name is           : "<<name+" "+surname<<endl;
	cout<<"Your age is                 : "<<age<<endl;
	cout<<"Your cgpa is                : "<<cgpa<<endl;
	cout<<"Your birtday details are    : "<<birth_detail<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	
	const float pi=3.14;
	int radius;
	
	cout<<"Enter Radius of a circle   : "<<endl;
	cin>>radius;
	
	cout<<"The Area of the Circle is  :"<<pi*radius*radius<<endl;
	
	
	
	cout<<"--------------------------------------------------------------"<<endl;

	int num1,num2;
	
	cout<<"Enter First number        : ";
	cin>>num1;
	cout<<endl;
	
	cout<<"Enter Second number       : ";
	cin>>num2;                            
	cout<<endl;                        
	                                    
	cout<<"The addition of Two numbers is         : "<<num1+num2<<endl;
	cout<<"The subtraction of Two numbers is      : "<<num1-num2<<endl;
	cout<<"The multiplication of Two numbers is   : "<<num1*num2<<endl;
	cout<<"The division of Two numbers is         : "<<num1/num2<<endl;
	cout<<"The modulo of Two numbers is           : "<<num1%num2<<endl;

	return 0;
}

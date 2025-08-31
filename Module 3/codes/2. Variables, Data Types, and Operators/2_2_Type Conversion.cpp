#include<iostream>
using namespace std;

int main()
{
	
// implicit Conversion
	float height=5.8;
	int _height=height;
	char grade='B';
	int _grade=grade; //B -> converted in to ASCII value.
	
	cout<<"---->implicit Conversion"<<endl;
	cout<<"The height is : "<<height<<endl;//float height
	cout<<"The height is : "<<_height<<endl;//int height
	cout<<"The grade is : "<<grade<<endl;
	cout<<"The grade is : "<<_grade<<endl;
	
	cout<<"--------------------------------------"<<endl;
	cout<<endl;
		
// Explicit Conversion
	float pi=3.141;
	int _pi=(int)pi;
	int _pi_=static_cast<int>(pi);
	
	cout<<"---->Explicit Conversion "<<endl;
	cout<<"The pi value is : "<<pi<<endl;
	cout<<"The pi value is : "<<_pi<<endl;
	cout<<"The pi value is : "<<_pi_<<endl;

	return 0;
}

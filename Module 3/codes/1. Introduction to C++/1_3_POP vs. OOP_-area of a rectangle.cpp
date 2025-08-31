#include<iostream>
using namespace std;

class rectangle{
	private:
		int area;
		int length;
		int width;		
	
	public:
	rectangle()
	{
		cout<<"Please enter length and width of the rectangle one by one:"<<endl;
		cout<<endl;
		
		cout<<"Enter the Length of the Rectangle : "<<endl;
		cin>>length;
	
		cout<<"Enter the Width of the Rectangle : "<<endl;
		cin>>width;			
	}
	
	void getarea()
	{
		area=length*width;
		cout<<"The Area of the Rectangle is :  Area = "<<length<<"(Length)"<<" * "<<width<<"(Width) ="<<area<<endl;
	}
	
};


int main()
{
	cout<<"The Example of finding area of rectangle using Procedural Programming (POP)."<<endl;
//Procedural Programming (POP).
	int length;//length and width both can be taken as float also.
	int width;
	int area_rectangle;
	
	cout<<"Please enter length and width of the rectangle one by one:"<<endl;
	cout<<endl;
	
	cout<<"Enter the Length of the Rectangle : "<<endl;
	cin>>length;

	cout<<"Enter the Width of the Rectangle : "<<endl;
	cin>>width;	
	
	area_rectangle=length*width;
	cout<<"The Area of the Rectangle is :  Area = "<<length<<"(Length)"<<" * "<<width<<"(Width) ="<<area_rectangle<<endl;
	cout<<endl;
	
	
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	
	

	cout<<"The Example of finding area of rectangle using Object-Oriented Programming (OOP)."<<endl;
//Object-Oriented Programming (OOP)
	rectangle r1;
	r1.getarea();
	return 0;
}

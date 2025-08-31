#include<iostream>
using namespace  std;

main()
{
	
	int a,b;
	
	cout<<"Enter the value of two integer numbers.\n"<<endl;	
	cout<<"Enter the value of first integer number: "<<endl;
	cin>>a;	
	cout<<"Enter the value of Second integer number: "<<endl;;
	cin>>b;


	cout<<endl;
//arithmatic operators	
	cout<<"arithmatic operations"<<endl;
	cout<<"addition of two integers is          : "<<a+b<<endl;
	cout<<"subtraction of two integers is       : "<<a-b<<endl;
	cout<<"multiplication of two integers is    : "<<a*b<<endl;
	cout<<"division of two integers is          : "<<a/b<<endl;


	cout<<endl;
//relational operators
	cout<<"0 means false and 1 means true"<<endl;
	cout<<"relational operations"<<endl;
	cout<< a <<" > "<< b <<"--> "<< (a>b)   << endl;
	cout<< a<<" < "<< b <<" -->"<< (a<b) << endl;
	cout<< a<<" == "<< b <<" -->"<< (a==b) << endl;
	cout<< a<<" >= "<< b <<" -->"<< (a>=b) << endl;
	cout<< a<<" <= "<< b <<" -->"<< (a<=b) << endl;
		
		
	cout<<endl;
//logical operators
	cout<<"Logical Operations"<<endl;
	cout<< a<<" > "<< b <<" and "<<a<<"=="<<b<<" -->"<< (a>b && a==b )<< endl;
	cout<< a<<" > "<< b <<" or "<<a<<"=="<<b<< " -->"<< (a>b || a==b )<< endl;
	cout<<"!(" << a<<" > "<< b << " and "<<a<<"=="<<b << ") "<< " -->"<< (!(a>b && a==b )) << endl;
	

	cout<<endl;
//bitwise operators
	cout<<"bitwise operations"<<endl;
	cout<<a  << " & "  <<b    <<  " = "  <<  (a&b)  <<endl;	
	cout<<a  << " | "  <<b    <<  " = "  <<  (a|b)  <<endl;
	cout<<a  << " ^ "  <<b    <<  " = "  <<  (a^b)  <<endl;
	cout<<"~"<< a             <<  " = "  <<  (~a)   <<endl;
	cout<<a  << " << " <<"1"  <<  " = "  <<  (a<<1) <<endl;
	cout<<a  << " >> " <<"1"  <<  " = "  <<  (a>>1) <<endl;
	cout<<"~"<< b             <<  " = "  <<  (~b)   <<endl;
	cout<<b  << " << " <<"1"  <<  " = "  <<  (b<<1) <<endl;
	cout<<b  << " >> " <<"1"  <<  " = "  <<  (b>>1) <<endl;

}



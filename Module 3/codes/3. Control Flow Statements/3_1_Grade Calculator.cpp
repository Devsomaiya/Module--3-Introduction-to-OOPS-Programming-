#include<iostream>
using namespace std;

int Grade_calculator(int M);

int main()
{
	int Marks;

	cout<<"Enter Marks of a Student : "<<endl;
	cin>>Marks;
	Grade_calculator(Marks);

	return 0;

}

int Grade_calculator(int M)
{
	if(M>90)
		{
			cout<<"Grade A"<<endl;
		}
		
	else if(M>75 && M<=90)
		{
			cout<<"Grade B"<<endl;
		
		}
		
	else if(M>50 && M<=75)
		{
			cout<<"Grade C"<<endl;
		
		}
		
	else
		{
			cout<<"Grade D"<<endl;
		}
	
}


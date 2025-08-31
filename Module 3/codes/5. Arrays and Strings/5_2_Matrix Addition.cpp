#include <iostream>
using namespace std;


int main() {
	int M1[2][2] , M2[2][2];
	int R[2][2];

	cout<<"Enter the Elements Of Matrix 1: "<<endl;
	for(int i=0 ; i<2; i++)
	{
		for(int j=0 ; j<2 ;j++)
		{
			cout<<"Enter row "<<i<<" column "<<j<<" element : ";
			cin>>M1[i][j];
		}
	}
	cout<<endl<<endl;
	
	cout<<"Enter the Elements Of Matrix 2: "<<endl;
	for(int i=0 ; i<2; i++)
	{
		for(int j=0 ; j<2 ;j++)
		{
			cout<<"Enter row "<<i<<" column "<<j<<" element : ";
			cin>>M2[i][j];
		}
	}
	cout<<endl<<endl;

	
	for(int i=0 ; i<2; i++)
	{
		for(int j=0 ; j<2 ;j++)
		{
			R[i][j]=M1[i][j]+M2[i][j];
		}
	}
	
	
	cout<<endl<<endl;
	cout<<"The Resultant Matrix is :"<<endl;
	for(int i=0 ; i<2; i++)
	{
		for(int j=0 ; j<2 ;j++)
		{
			cout<<R[i][j]<<" ";
		}
		cout<<endl;
	}

    return 0;
}


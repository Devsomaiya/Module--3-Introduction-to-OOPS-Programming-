#include <iostream>
using namespace std;

class BankAccount{
	private:
		float balance=10000;

	public :
		void deposit(float amount)
		{
			balance+=amount;
			cout<<amount<<" Deposited in the account."<<endl;
			cout<<"The Current Balance in the account is : "<<balance<<endl;
		}
		
		void withdraw(float amount)
		{
			balance-=amount;
			cout<<amount<<" Withdrawn drom the account."<<endl;
			cout<<"The Current Balance in the account is : "<<balance<<endl;

		}
		
		void check_balance()
		{
			cout<<"The Current Balance in the account is : "<<balance<<endl;
		}


};



int main()
 {
	BankAccount My_account;
	int amount;
	int choice;
	
	cout<<"******  Hello Dear Customer !  ******"<<endl<<endl;
	
	cout<<"Please Select the option from below  : "<<endl;
	cout<<"1. Check_Balance   (Press ->1) : "<<endl;
	cout<<"2. Deposit         (Press ->2) : "<<endl;
	cout<<"3. Withdraw        (Press ->3) : "<<endl<<endl;
	
	cout<<"Enter Your Choice : "; 
	cin>>choice;
	
	if(choice==2 || choice==3)
	{
		cout<<"Please Enter The amount :"<<endl;
		cin>>amount;
	}
	
	switch(choice)
	{
		case 1: 	My_account.check_balance()  ;
				break;

		case 2: 	My_account.deposit(amount)  ;
				break;
				
		case 3: 	My_account.withdraw(amount)  ;
				break;
	}
	
	
	
	
	
    return 0;
}


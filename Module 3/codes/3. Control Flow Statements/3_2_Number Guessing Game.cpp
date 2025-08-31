#include<iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>  // for time()

using namespace std;

int main()
{

    srand(time(NULL)); // seed the random number generator
    int number;
    int attempts_limit=7;
    int no_of_attempts=1;
    char Gussed='N';
    

    
    cout<<"Welcome to number gussing game  !!"<<endl;
    cout<<"You have "<<attempts_limit<<" attempts to guess the number "<<endl;


    int min = 1, max = 100;
    int r = rand() % (max - min + 1) + min;

    while(no_of_attempts<=attempts_limit)
	{
		
		cout<<endl<<endl;
		cout<<"Guess the number from 1 to 100!!! : ";
		cin>>number;
	
        if(number<r)
        {

        	cout<<endl;
        	cout<<"Wrong           Hint -->Try Larger Number , "<<number<<" is too Low"<<endl;
        	cout<<attempts_limit-no_of_attempts<<" attempts remaining"<<endl;
        	no_of_attempts++;

		}
		else if(number>r)
        {


        	cout<<endl;
        	cout<<"Wrong           Hint -->Try Smaller Number , "<<number<<" is too High "<<endl;
        	cout<<attempts_limit-no_of_attempts<<" attempts remaining"<<endl;
        	no_of_attempts++;

		}
		else  if(number==r)
        {
        	cout<<endl;
        	cout<<"Right           your number is "<<number<<"  equal to random number "<<r<<endl;
			cout<<"you took "<<no_of_attempts<<" attempt to guess the random number"<<endl;        	
        	Gussed='Y';
        	break;

		}

    }
    
    if(Gussed=='N')
    {
    	cout<<endl;
    	cout<<"only "<< attempts_limit <<" attempts are allowed . "<<endl<<"The Random number is "<<r<<" . "<<endl;
	}


	return 0;
}



//		r = rand() % (max - min + 1) + min;












     



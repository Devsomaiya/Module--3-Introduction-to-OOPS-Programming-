#include <iostream>
#include <cctype> 
using namespace std;


int main() {
	string name;
	string name_with_alnum;;
	int count=0;
	int limit=0;
	
	cout<<"Enter a string :"<<endl;
	getline(cin,name);
	
	
	
	for(int i=0 ;i<name.length();i++)
	{
		if(isalnum(name[i]))
		{
			name_with_alnum.push_back(tolower(name[i]));	
		}
	}
	cout<<name_with_alnum;
	if(name_with_alnum.length()%2==0)
	{
		limit=(name_with_alnum.length())/2;
	}
	else{
		limit=(name_with_alnum.length()+1)/2;
	}
	
	for (int i=0 ; i<limit ; i++)
	{
		if(name_with_alnum[i]==name_with_alnum[name_with_alnum.length()-1-i])
		{
			count++;
		}
	}
	
	cout<<endl<<endl;
	if(count==limit)
	{
		cout<<"The string "<<name<<" is a Palindrome."<<endl;
	}
	else{
		cout<<"The String "<<name<<" is not a palindrome."<<endl;
	}
	
	

    return 0;
}


#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter your exam score:";
	cin>>n;
	if(n>=80 && n<=100)
	{
		cout<< "You had an A"; 
	}
	else if(n>=70 && n<80)
	{
		cout<< "You had an B";
	}
	else if(n>=60 && n<70)
	{
		cout<< "You had a C";
	}
	else if(n>=50 && n<60)
	{
		cout<< "You had a D";
	}
	else if(n>=40 && n<50)
	{
		cout<< "You had an E";
	}
	else if(n>=0 && n<40)
	{
		cout<< "You had an F";
	}
	else
	{
		cout<< "Invalid exam score!";
	}
	return 0;
}

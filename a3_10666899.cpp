#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Input exam score:";
	cin>>n;
	switch(n/10)
	{
	case 10:
	case 9:
	case 8:	
		cout<< " You had an A";
		break;
	case 7:
		cout<< "You had  B";
		break;
	case 6:
		cout<< "You had C";
		break;
	case 5:
		cout<< "You had D";
		break;
	case 4:
		cout << "You had E";
	case 3:
	case 2:
	case 1:
	case 0:
		cout<< "You had F!";
		break;
	default: cout<<"Exam score is invalid";	
	}
	return 0;
}

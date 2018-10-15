#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
float aveAge=0;
float aveScore=0;
	int x=0;
	int y=0;
struct details
{
string iDNumber;
string name;
int age;
char gender;
float score;
char grade; 
};
struct details student[50];
int n, i;
cout<<"Enter number of students:";
cin>>n;
fstream();
for (i = 0; i < n; i++)
{
cout<<"Student name: \n";
cin>>student[i].name;
cout<<"Student ID number: \n";
cin>>student[i].iDNumber;
cout<<"Student age: \n";
cin>>student[i].age;
cout<<"Gender(m/f): \n";
cin>>student[i].gender;
if (student[i].gender=='m')
{
	x=x+1;
}
else if (student[i].gender=='f')
{
	y=y+1;
}
else
{
cout<<"wrong input!";
return 0;
}
cout<<"Score: \n";
cin>>student[i].score;
{
		if(student[i].score>=80 && student[i].score<=100)
	{
		student[i].grade= 'A'; 
	}
	else if(student[i].score>=70 && student[i].score<80)
	{
		student[i].grade= 'B';
	}
	else if(student[i].score>=60 && student[i].score<70)
	{
		student[i].grade= 'C';
	}
	else if(student[i].score>=50 && student[i].score<60)
	{
		student[i].grade= 'D';
	}
	else if(student[i].score>=40 && student[i].score<50)
	{
		student[i].grade= 'E';
	}
	else
	{
		student[i].grade= 'F';
	}
}
}
		ofstream myfile ("studentData.txt");
	if (myfile.is_open())
	{
	myfile<<"                                     ** STUDENT ** \n";
myfile<<"------------------------------------------------------------------------------------------\n";
myfile<<"NUMBER |   ID NUMBER  |    NAME     |    AGE    |    GENDER    |    SCORE    |    GRADE \n";
myfile<<"------------------------------------------------------------------------------------------\n";
for (i = 0; i < n; i++)
{
myfile<<i+1<<"  \t   "<<student[i].iDNumber<<"\t\t"<<student[i].name<<"       \t"<< student[i].age<<"\t\t"<<student[i].gender<<"\t\t"<< student[i].score<<"     \t"<<student[i].grade;
myfile<<"\n-----------------------------------------------------------------------------------------\n";
}
for(i = 0; i<n; i++)
{
aveAge=aveAge + student[i].age;
aveScore=aveScore + student[i].score;
}
aveAge= aveAge/n;
aveScore=aveScore/n;
myfile<<"Average age: " <<aveAge;
myfile<<"\nAverage Score: "<< aveScore;
myfile<<"\nNumber of males is: "<<x;
myfile<<"\nNumber of females is: "<<y;
		myfile.close();
	}
	
		else cout <<"Unable to open file";
	
return 0;
}

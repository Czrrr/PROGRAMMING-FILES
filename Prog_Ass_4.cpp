#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
/*program that calculate the student average and tell if the student is passed or failed  */

float grade1, grade2, grade3, ave;

cout<<"Enter 1st grade:";
cin>>grade1;
cout<<"Enter 2nd grade:";
cin>>grade2;
cout<<"Enter 3rd grade:";
cin>>grade3;

ave = (grade1+grade2+grade3)/3;

  if(ave>=75 && ave<=100)
	{
		cout<<"You Passed";
		cout<<"\n Your Average is:"<<ave;
	
	}
  else if(ave>=60 && ave<=74)
	{
		cout<<"You Failed";
		cout<<"\n Your Average is:"<<ave;
	
	}
  else
	{
		cout<<"Invalid grade/average";

	}

getch(); //if not include to your syntax
}
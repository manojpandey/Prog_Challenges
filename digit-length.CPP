/*
Program to find number of digits in a number
*/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	long num;
	int ctr=1;

	cout<<" Enter the number : ";
	cin>>num;

	while(num!=0)
	{
		num=num/10;
				if(num!=0)
			{
				ctr++;
			}
	}

	cout<< " \n No of digits: "<< ctr;
}
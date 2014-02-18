/* Program to generate Fibonacci Series*/


#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	unsigned long first, second, third, n;
	first=1;
	second=1;
	cout<<"\t How many elements(>5)\n";
	cin>>n;
	cout<<"\t *******FIBONACCI SERIES*******\n";
	cout<<first<<" "<<second;
	for(int i=2;i<n;++i)
	{
		third=first+second;
		cout<<" "<<third;
		first=second;
		second=third;

       }
}


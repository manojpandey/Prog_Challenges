/*Program to find factorial of a number*/

#include<iostream.h>
#include<conio.h>             //for clrscr()
#include<process.h>          //for exit()
void main()
{	clrscr();
	void fact(long double);
	long n,lb;
	char ch;
	lb: ;           //label
	cout<<"Calculate Factorial for which number?\n";
	cin>>n;
	fact(n);
	cout<<"Want more(y/n)?\n";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	goto lb      ;         //jump statement
	else exit(0);
}
void fact(long double x)
{      	long res=1;
	for(long i=1;i<=x;i++)
	{	res*=i;
	cout<<res<<" "<<"\n";   }
	cout<<"The factorial of "<<x<<" is "<<res<<"\n";
}
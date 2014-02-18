/*Program to find factorial of a number*/
		//IInd Method

#include<iostream.h>
#include<conio.h>             //for clrscr()
#include<process.h>          //for exit()
void main()
{	clrscr();
	double fact(long);
	long n,lb;
	long double y;
	char ch;
	lb: ;           //label
	cout<<"Calculate Factorial for which number?\n";
	cin>>n;
	y=fact(n);
	cout<<"The factorial of "<<n<<" is "<<y<<"\n";
	cout<<"Want more(y/n)?\n";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	goto lb      ;         //jump statement
	else exit(0);
}
double fact(long x)
{      	long double res=1;
	for(long i=1;i<=x;i++)
	{	res*=i;}
	return res;
}
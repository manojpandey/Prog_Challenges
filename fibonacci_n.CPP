/* Program to find nth fibonacci number*/


#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ctr=2;
	unsigned long first, second, third, n;
	first=1;
	second=1;
	cout<<"\t How many elements(>5)\n";
	cin>>n;
	cout<<"\t ******* Nth FIBONACCI NUMBER*******\n";

	for(int i=2;i<n;++i)
	{
		third=first+second;
		ctr++;
		if(ctr==n)
		{
			cout<<third;
		}

		first=second;
		second=third;

       }
}


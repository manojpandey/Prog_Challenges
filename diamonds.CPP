/*
Program to diplay a diamond representation
*/

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,l;
	for(i=0;i<=5;i++)
	{	for(k=4;k>=i;k--)
		{
		cout<<" ";
		}
	for(j=1;j<=i;j++)
	{cout<<"*";
	}
	for(l=1;l<=i-1;l++)
	{cout<<"*";
	}
	cout<<"\n";
	}
	for(i=4;i>=1;i--)
	{	for(k=4;k>=i;k--)
		{
		cout<<" ";
		}
	for(j=1;j<=i;j++)
	{cout<<"*";
	}
	for(l=1;l<=i-1;l++)
	{cout<<"*";
	}
	cout<<"\n";
	}
}
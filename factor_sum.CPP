/*
Program to find all factors of a number in less than O(n) complexity.
*/

#include<iostream.h>
#include<math.h>
void factor(int);
void main()
{
	int x,a[50];
	cin>>x;		//test cases

	for(int i=0;i<x;i++)
	cin>>a[i];

	for(i=0;i<x;i++)
	{
		factor(a[i]);
		cout<<"\n";
	}

}

void factor(int n)
{
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
			if(i!=sqrt(n))
			cout<<n/i<<" ";
		}
	}
}
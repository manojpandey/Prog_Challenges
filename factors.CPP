/*
Program to find the sum of all factors of a number in less than O(n) complexity
*/

#include<iostream.h>
#include<stdio.h>
#include<math.h>
void factor(int);
void main()
{   int x;
    cin>>x; //no. of test cases
    int a[10];

    for(int i=0;i<x;i++)
    cin>>a[i];

    for(int j=0;j<x;j++)
    factor(a[j]);

}




void factor(int n)
{   int sum=0;
    for(int i=1;i<=sqrt(n);i++)
    {
	if(n%i==0)
	{
		sum+=i;
		if(i!=sqrt(n))
		sum+=n/i;
	}
    }
    cout<<sum<<"\n";
}

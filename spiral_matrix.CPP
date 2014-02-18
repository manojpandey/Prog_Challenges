/*
Program to display elements of a 2D matrix in spiral form.

INPUT:	1   2  3  4
	5   6  7  8
	9  10 11 12
	13 14 15 16

OUTPUT:	1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int A[10][10],N,n,i,j,a;
	cout<<"\nSize?  ";
	cin>>N;

	cout<<"\nEnter the matrix elements:\n ";
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>A[i][j];
		}
	}

	cout<<"\nMatrix entered: \n";
	for(i=0;i<N;i++)

	{      	cout<<"\n";
		for(j=0;j<N;j++)
		{
			cout<<" "<<A[i][j];
		}
	}

	cout<<"\n\n";

	if(N%2==0)
		n=N/2;
	else
		n=N/2+1;

	for(a=0;a<n;a++)
	{
		for(i=a,j=a;j<N-a;j++)
			cout<<A[i][j]<<" ";

		for(i=a+1,j=N-1-a;i<N-a;i++)
			cout<<A[i][j]<<" ";

		for(i=N-1-a,j=N-2-a;j>=a;j--)
			cout<<A[i][j]<<" ";

		for(i=N-2-a,j=a;i>=a+1;i--)
			cout<<A[i][j]<<" ";
	}
}
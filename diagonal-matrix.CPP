/* 	Write a program to accept a matrix of order M x N and store its elements 
 	and interchange the main diagonal elements of the matrix                   
	with that of the secondary diagonal elements
	
Enter the order of the matix
3 3
Enter the co-efficients of the matrix
1 2 3
4 5 6
7 8 9

The given matrix is
 1 2 3
 4 5 6
 7 8 9
 
The matrix after changing the
main diagonal & secondary diagonal
 3 2 1
 4 5 6
 9 8 7
*/

#include<iostream.h>
#include <stdio.h>
#include<conio.h>


void main ()
{
	clrscr();
	int a[10][10];
	int i,j,n,x;

	cout<<"\nEnter the order of the square matix \n";
	cin>>n;;

		cout<<"\nEnter the co-efficients of the matrix\n";

		for (i=0;i<n;++i)
		for (j=0;j<n;++j)

		cin>>a[i][j];

	       cout<<"\nThe given matrix is \n";
		for (i=0;i<n;++i)
		{
			for (j=0;j<n;++j)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}

		for (i=0;i<n;++i)
		{
				x = a[i][i];
				a[i][i]   = a[i][n-i-1];
				a[i][n-i-1] = x;
		}

		cout<<"\nThe matrix after changing the diagonal is:\n";
		for (i=0;i<n;++i)
		{
			for (j=0;j<n;++j)
			{
					cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
}
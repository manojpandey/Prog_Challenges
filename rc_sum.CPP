/*row sum and column sum*/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int A[10][10],n,i,j,r_s=0,c_s=0;
	cout<<"Enter size\n";
	cin>>n;

	cout<<"Enter elements of first matrix\n";
	for(i=0;i<n;i++)                                  //input
	for(j=0;j<n;j++)
	cin>>A[i][j];

	for(i=0;i<n;i++)
	{       	cout<<"\n";
			for(j=0;j<n;j++)         //display
			cout<<" "<<A[i][j];
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		r_s+=A[i][j];
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		c_s+=A[i][j];
	}

	cout<<"\n\nRow sum: \n"<<r_s;
	cout<<"Column sum: "<<c_s;
}
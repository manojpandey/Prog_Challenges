//Program to check for total number of primes in a range

#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	long i,j,n, count=0,ctr=0;

	cout<<"\n\nEnter the number upto which you want to check for primality : ";

	cin>>n;
	for(i=2;i<n;i++)
	  {	 for(j=1;j<=i;j++)
		 {
				if(i%j==0)
				{
					count++;
				}
		 }
		 if(count==2)
		{ cout<<i<<"\t";
		ctr++;
		}
		count=0;

	  }
	cout<<"\n\nTotal primes between 1 and "<< n <<" are: "<<ctr;
	cout<<endl;

	getch();
}



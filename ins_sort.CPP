/*
Another Algorithm implemented Insertion Sort
*/

#include<iostream.h>
#include<conio.h>

void insort(int [], int ); //func for Insertion sort
int main()

{
	int AR[50],ITEM,n,index;
	cout<<"How many elements do u want to create array with ?(max 50)";

	cin>>n;
	cout<<"\n Enter Array elements...";

	for(int i=1;i<=n;i++)
	cin>>AR[i];

	insort(AR,n);
	cout<<"The Sorted array is below\n";

	for(i=1;i<=n;i++)
	cout<<AR[i]<<" ";
	cout<<endl;
	return 0;
}

void insort(int AR[], int n)
{       int temp;
	for(int i=1;i<= n;i++)
	{
		while(AR[i]<AR[i-1] && i>0)
		{
			temp=AR[i];
			AR[i]=AR[i-1];
			AR[i-1]=temp;
			i--;
		}
	}
}
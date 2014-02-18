/*
Insertion Sort
*/
#include<iostream.h>
#include<limits.h>  //for INT_MIN

void insertionSort(int [], int ); //func for Insertion sort
int main()

{
	int AR[50],ITEM,N,index;
	cout<<"How many elements do u want to create array with ?(max 50)";
	cin>>N;

	cout<<"\n Enter Array elements...";

	for(int i=1;i<=N;i++)
		cin>>AR[i];

	insertionSort(AR,N);

	cout<<"The Sorted array is below\n";
	for(i=1;i<=N;i++)
    cout<<AR[i]<<" ";

	cout<<endl;
	return 0;

}

void insertionSort(int AR[], int size)

{
	int tmp,j;
    AR[0]=INT_MIN;
    
	for(int i=1;i<=size;i++)
	{
		tmp=AR[i];
		j=i-1;

		while (tmp<AR[j])
		{ 
			AR[j+1]=AR[j];
			j--;
		}
			
			AR[j+1]=tmp;
		
		cout<<"Array after pass- "<<i << " - is ";
		for(int k=1;k<=size;k++)
	    cout<<AR[k] <<" ";
	    
		cout<<endl;
	}
}
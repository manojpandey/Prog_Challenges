/*
Find the missing term in an Arithmetic Progression.
An Arithmetic Progression is defined as one in which there is a constant difference between the consecutive terms of a given series of numbers. You are provided with consecutive elements of an Arithmetic Progression. There is however one hitch: Exactly one term from the original series is missing from the set of numbers which have been given to you. The rest of the given series is the same as the original AP.  Find the missing term.
	INPUT FORMAT:
The first line contains an Integer N, which is the number of terms which will be provided as input.
This is followed by N consecutive Integers, with a space between each pair of integers. All of these are on one line, and they are in AP (other than the point where an integer is missing).
	OUTPUT FORMAT:
One Number which is the missing integer from the series.

Sample Input
5
1 3 5 9 11

Sample Output
7

Explanation:
You are provided with 5 integers. As you can can observe, they have been picked from a series, in which the starting term is 1 and the common difference is 2. The only abberration, i.e. the missing term (7), occurs between 5 and 9. This is the missing element which you need to find.

Constraints
3 <= N <= 2500
All integers in the series will lie in the range [-10^6,+10^6].

*/

	#include<iostream.h>
	#include<conio.h>
	#include<process.h>
	#include<stdio.h>

	void main()
	{
		int N,A[8],B[10],cd,i,j,k,pos;
		//cd is for common difference of the AP

	cout<<"\n\tEnter Size of the Array (Range: 3-2500, inclusive): ";
	cin>>N;
		//Entering the Array
		cout<<"\n\tEnter the elements: ";
		for(i=0;i<N;i++)
		cin>>A[i];

		// Displaying the Entered array
		cout<<"\n\tEntered Elements are: ";
		for(i=0;i<N;i++)
		cout<<A[i]<<" ";

		//Checking and Getting the common difference
			cd=A[1]-A[0];
			if((A[2]-A[1])<cd)
			cd=(A[2]-A[1]);

		/*Creating a new AP array having all elements,
		including the missing one*/
		for(j=A[0];j<N;j+=cd)
		{
			B[k]=j;
			k++;
		}

		cout<<"\n\tThe New Array with all elements is: ";
		for(i=0;i<=N;i++)
		cout<<B[i]<<" ";

		/*Matching the elements from array A with B,
		 and finding the missing element*/
		for(i=0;i<=N;i++)
		{
			if(A[i]!=B[i])
			{
				pos=i;
				break;
			}
		}

		cout<<"\n\tMissing Element is : "<<B[pos];
}
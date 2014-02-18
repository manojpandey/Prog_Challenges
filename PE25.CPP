/*
Project Euler Problem 25
User: manojpandey
Q. Find the first term in fibonacci sequence to contain 1000 digits.

EDIT: 	The program below is a general program for any number of
	digits you want to search the first term.

	Maths Involved:

	The nth fibonacci number is approximated with the Binet's formula as:

		F_n= [(phi^n)/(sqrt(5))] , where phi is the golden ratio and
		phi=  ((1+sqrt(5))/2)

		As the number of digits is 1000, so the nth fibonacci number
		will be greater than 10^(999).

		Taking log both sides, and solving for n, rounding off
		to nearest integer, we get the answer.
*/

#include<iostream.h>
#include <math.h>
#include <stdio.h>
#define phi ((1+sqrt(5))/2)
int main(void)
{       int x;
	cout<<" Enter the number of digits, for which you want to search the first term in the Fibonacci Series: ";
	cin>>x;

	int n= (((x-1) + log10(sqrt(5)))/(log10(phi)));
	cout<<"Term is  : "<<n+1;

   return 0;
}
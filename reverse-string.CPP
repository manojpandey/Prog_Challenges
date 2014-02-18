/*
Program to reverse the words in a string
*/

#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

void main()

{
	char str[50];
	int i,k=0;
	char word[50];
	cout<<"Enter string:  ";
	gets(str);
	strcat(str," ");

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			word[k]=str[i];
			k++;
		}
		else
		{
			while(k>0)
			{
				cout<<word[--k];
			}
		cout<<str[i];
		}
	}
	getch();
}
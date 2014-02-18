/*
PROBLEM:

Given a list of space separated words, reverse the order of the words.

INPUT:

The first line of input gives the number of cases, N.
N test cases follow. 

OUTPUT:

For each test case, output one line containing "Case #x: " followed by the list of words in reverse order.


Limits:
N <= 5

Example:

INPUT:										OUTPUT:
			3											
			this is a test							Case #1: test a is this
			foobar									Case #2: foobar
			all your base							Case #3: base your all
*/

			#include<iostream.h>
			#include<conio.h>
			#include<fstream.h>
			#include<string.h>
			#include<stdlib.h>
			#include<stdio.h>

	class prog {

		char str[50];
		
		public:

		void getdata()
		   {
				gets(str);
		   }

		void rev();
		
		void srev();
		
		void display()
		{
			cout<< str;
		}


	};

	void prog::srev()
			{	
				int i,j,len;
				char temp;
				cout<< "\n\tEntered String        : ";
				puts(str);

				len=strlen(str);

				for(i=0,j=len-1;i<len/2;i++,j--)
					{
						temp=str[i];
						str[i]=str[j];
						str[j]=temp;
					}

				cout<<"\n\tWhole String revesed  : ";
				puts(str);
		    
			}
			
			
	void prog::rev()
		{

			int i,k=0;
			char word[50];
			strcat(str," ");

			cout<<"\n\tReversed letters now  : ";
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
	
  void main()
	{		clrscr();
	
		  fstream file;

		  int n;
		  cout<<"\n\tHow many test cases? (Limit: 5) :  ";
		  cin>>n;

		  prog p[10];

		  file.open("cjrw.txt",ios::in|ios::out|ios::binary);

		  
		  for(int i=0;i<n;i++)
		  {
				cout<<"\n\tEnter string #" << i+1<<" : ";
				p[i].getdata();
				file.write((char*)&p[i],sizeof(p[i]));
		  }

			file.seekg(0);

			cout<< "\n\tList of strings entered:  ";

		       for(i=0;i<n;i++)

		       {
					cout<<"\n\n\tString # "<<i+1<<" :  ";
					file.read((char*)&p[i],sizeof(p[i]));
					p[i].display();
		       }
				
			getch();
				
				
		  cout<<"\n\n\n\tReversing process taking place ... \n";
			
			getch();
			
		  for(i=0;i<n;i++)
		  {	
			cout<<"\n\n\tFor String #"<<i+1<<" :  ";
		    p[i].srev();
		    p[i].rev();
		  }
		
		clrscr();
	}
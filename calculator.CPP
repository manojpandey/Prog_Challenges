#include<iostream.h>
#include<string.h>
#include<conio.h>
int main()
{
clrscr();


float mult, add, sub, divide, a, b, c, d;
	int choice;
	float num1,num2;

    cout<<"---------------------------------------------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"----------- CALCULATOR!!!!!------------------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"	Make a selction:"<<endl;
    cout<<"	1.Division"<<endl;
    cout<<"	2.Adding"<<endl;
    cout<<"	3.Subtraction"<<endl;
    cout<<"	4.Multiplication"<<endl;
    cout<<" YOUR CHOICE IS?? (1/2/3/4/5): ";
    cin>>choice;
    switch(choice)

{
	case 1:
	cout<<"Please enter the two numbers you want to divide, divisor first!: ";
	cin>>num1>> num2;
	cin.ignore();
	a=num1/num2;
	cout<<a;


	break;
	case 2:
	cout<<"Please enter the two numbers you want to add: ";
	cin>>num1>> num2;
	cin.ignore();
	b=num1=num2;
	cout<<b;

	break;
	case 3:
	cout<<"Please enter the two numbers you want to subtract, The number you want to subtract from first!: ";
	cin>>num1>> num2;
	cin.ignore();
	c=num1-num2;
	cout<<c;

	break;
	case 4:
	cout<<"Please enter the two numbers you want to multiply: ";
	cin>>num1>>num2;
	cin.ignore();
	d=num1*num2;
	cout<<d;

	break;
	default:
	cout<<"Invalid Entry!, BYE!!!"<<endl;
	cin.ignore();

	break;

}
	cin.ignore();
	return 0;

}
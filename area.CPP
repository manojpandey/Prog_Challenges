#include<iostream.h>
#include<math.h>
#include<conio.h>
int main()
{       clrscr() ;
	float area, rad, len, bre, a, b, c, s ;
	int ch ;
	cout << "Area Menu" << "\n" ;
	cout << "1. Circle" << "\n" ;
	cout << "2. Rectangle" << "\n" ;
	cout << "3. Triangle" << "\n" ;
	cout << "Enter your choice :" ;
	cin >> ch ;
cout << "\n";
switch(ch)
{
	case 1 : cout << "Enter radius of circle" ;
		cin >> rad ;
		area = 3.14 * rad * rad ;
		cout << "\n" << "The area of circle is " << area << "\n" ;
		break ;
	case 2 : cout << "Enter length and breadth of rectangle : " ;
		cin>> len >> bre ;
		area = len * bre  ;
		cout << "\n" << "The area of the rectangle is " << area << "\n" ;
		break ;
	case 3 : cout << "Enter three sides of the triangle:" ;
		cin >> a >> b >> c ;
		s = (a+ b+ c) / 2;
		area = sqrt(s * (s-a) * (s-b) * (s-c)) ;
		cout << "\n" << "The area of the triangle is" << area << "\n" ;
		break ;
	default : cout << "Wrong choice !!!!!" ;
		break ;
}
	return 0 ;
}
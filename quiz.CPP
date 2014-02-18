//Quiz Game


#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void main()
{
clrscr();
long double amount;
amount=100;
int total=0;
int option,l,i,n,a[10],b[10],c[10],d[10],e[10],f[10],g[10];
char ch,name[20],place[25],e_mail[25];
cout<<"                WELCOME TO kaiyil oru kodi are you ready";
cout<<"\n                *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
getch();
clrscr();
cout<<"                    kaiyil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\nBefore starting we would like to know some informatios about you";
cout<<"\n";
cout<<"\nName:";
cin.getline(name,25);
cout<<"\nPlace:";
cin.getline(place,25);
cout<<"\nYour email id:";
cin.getline(e_mail,25);
getch();
clrscr();
cout<<"                    kayil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<amount<<" in your hand";
cout<<"\nAnd it depends on how you play to get this money";
cout<<"\nHere are the rules:";
cout<<"\n1)you will be having 7 questions";
cout<<"\n2)Questions one to three you will have 4 options";
cout<<"\n3)questions four to six you will have 3 options";
cout<<"\n4)questions number seven will have 2 options and his decides your fate";
cout<<"\n5)you are suppposed to keep keep particular amounts in the the options as you belive that is right";
cout<<"\n6)from questions one to three you are allowed either to keep the amount in one option or in three of them";
cout<<"\n7)you are allowed to change the amount only once through out this game just like an life line";
cout<<"\n";
cout<<"\nPress any key to continue";
getch();
clrscr();
cout<<"                    kaiyil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<amount<<" in your hand";
cout<<"\nyour first question which will be having 4 option";
cout<<"\n";
cout<<"\nWho was the first president of India";
cout<<"\n*********************             *********************";
cout<<"\n*  OPTION 1         *             *  OPTION 2         *";
cout<<"\n*Dr. Rajendra Prasad*             *Dr.Zahir Hussain   *";
cout<<"\n*********************             *********************";
cout<<"\n*********************             *********************";
cout<<"\n*  OPTION 3         *             *  OPTION 2         *";
cout<<"\n*Jawaharlal Nehru   *             *Rajiv Gandhi       *";
cout<<"\n*********************             *********************";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 3 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option::";
cin>>option;
if(option==1)
{
n=4;
cout<<" you  are allowed to put the amount in only three options and the option which you believe is wrong is to be kept blank and the sum of their amount\n should be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and\n the total amount is to be kept is "<<amount<<"::";
cin>>a[i];
amount=amount-a[i];
}
total=total+a[1];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>a[i];
if(a[i]==1)
{
total=100;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option 1 Dr.rajendra Prasad";
if(a[1]>1||a[i]==1)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong";exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();
if(a[1]>0||a[i]==1)
{
amount=total;
clrscr();
cout<<"                    kaiyil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour second question which will be having 4 option";
cout<<"\n";
cout<<"\nWhich is the capital of Manipur";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*    Shillong       *             *    Bhopal         *";
cout<<"\n*********************             *********************";
cout<<"\n*********************             *********************";
cout<<"\n*   OPTION 3        *             *    OPTION 4       *";
cout<<"\n*   Manipur         *             *   Dedradun        *";
cout<<"\n*********************             *********************";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 3 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option::";
cin>>option;
if(option==1)
{
n=4;
cout<<" you  are allowed to put the amount in only three options and the option which you believe is wrong is to be kept blank and the sum of their amount\n should be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be dkept is "<<amount<<":";
cin>>b[i];
amount=amount-b[i];
}
total=amount+b[3];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>b[i];
if(b[i]==3)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option  (3) Manipur";
if(b[3]>1||b[i]==3)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong"; exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}


if(b[3]>10||b[i]==3)
{
amount=total;
clrscr();
cout<<"                    kaiyil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour third question which will be having 4 option";
cout<<"\n";
cout<<"\nWorld climate is threatened by the increase in the concentration of:";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*    Oxygen         *             *    Nitrogen       *";
cout<<"\n*********************             *********************";
cout<<"\n*********************             *********************";
cout<<"\n*   OPTION 3        *             *    OPTION 4       *";
cout<<"\n*   Hydrogen        *             *   Carbondioxide   *";
cout<<"\n*********************             *********************";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 3 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option";
cin>>option;
if(option==1)
{
n=4;
cout<<" you  are allowed to put the amount in only three options and the option which you believe is wrong is to be kept blank and the sum of their amount should\n be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be dkept is "<<amount<<":";
cin>>c[i];
amount=amount-c[i];
}
total=amount+c[4];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>c[i];
if(c[i]==4)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option  (4)Carbondioxide";
if(c[4]>1||c[i]==4)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong";    exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}

if(c[4]>1||c[i]==4)
{
amount=total;
clrscr();
cout<<"                    kaiyil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour fourth question which will be having 3 option";
cout<<"\n";
cout<<"\nWho was the founder of the Indian NAtional Congress";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*    A O Hume       *             *  Mahatma Gandhi   *";
cout<<"\n*********************             *********************";
cout<<"\n*********************         ";
cout<<"\n*   OPTION 3        *         ";
cout<<"\n*   W C Banerjee    *          ";
cout<<"\n*********************            " ;
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 2 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option";
cin>>option;
if(option==1)
{
n=3;
cout<<" you  are allowed to put the amount in only three options and the option which you believe is wrong is to be kept blank and the sum of their amount \nshould be"<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be kept is "<<amount<<":";
cin>>d[i];
amount=amount-d[i];
}
total=amount+d[1];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>d[i];
if(d[i]==1)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option  (1)A O HUME";
if(d[1]>1||d[i]==1)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong"; exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}
if(d[1]>1||d[i]==1)
{
amount=total;
clrscr();
cout<<"                    kaiyil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour fith question which will be having 3 option";
cout<<"\n";
cout<<"\nIn Tibet the Brahmaputra is know as";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*    Brahmaputra    *             *    Tsangpo        *";
cout<<"\n*********************             *********************";
cout<<"\n*********************";
cout<<"\n*   OPTION 3        * ";
cout<<"\n*    Dihang         * ";
cout<<"\n********************* ";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 2 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option::";
cin>>option;
if(option==1)
{
n=3;
cout<<" you  are allowed to put the amount in only two options and the option which you believe is wrong is to be kept blank and the sum of their amount \nshould be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be dkept is "<<amount<<":";
cin>>e[i];
amount=amount-e[i];
}
total=amount+e[2];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>e[i];
if(e[i]==2)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option (2)Tsangpo";
if(e[2]>1||e[i]==2)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong";exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}
if(e[2]>1||e[i]==2)
{
amount=total;
clrscr();
cout<<"                    kaiyil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour sixth question which will be having 3 option";
cout<<"\n";
cout<<"\nA person elected as a member of the HOUSE OF THE PEOPLE(Lok Sabha) must be";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*     25 years      *             *      30 years     *";
cout<<"\n*********************             *********************";
cout<<"\n*********************";
cout<<"\n*   OPTION 3        * ";
cout<<"\n*    35 years       * ";
cout<<"\n********************* ";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 2 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option::";
cin>>option;
if(option==1)
{
n=3;
cout<<" you  are allowed to put the amount in only two options and the option which you believe is wrong is to be kept blank and the sum of their amount\n should be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be dkept is "<<amount<<":";
cin>>f[i];
amount=amount-f[i];
}
total=amount+f[1];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>f[i];
if(f[i]==1)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option 1 25 years";
if(f[1]>1||f[i]==1)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong";exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}
if(f[1]>1||f[i]==1)
{
amount=total;
clrscr();
cout<<"                    kaiyil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour seventh and last question which will be having only  option";
cout<<"\n";
cout<<"\nMorning is related to 'DAWN' in the same way 'NIGHT'is related to ";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*      DUSK         *             *    MIDNIGHT       *";
cout<<"\n*********************             *********************";
cout<<"\n";
cout<<"\nAs it is the last question you could only use one of the options above";

cout<<"\nIn which option have you decided to keep the whole amount";
cin>>g[i];
if(g[i]==1)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option 1 Dusk";
if(g[1]>1||g[i]==1)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong"; exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();
if(g[1]>1||g[i]==1)
{
amount=total;
clrscr();
cout<<"                    kaiyil oru kodi are you ready";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"CONGRATS!!!!!!!!!!!!!!!!!!!! "<<name<<" you have won "<<amount;
cout<<name<<" from "<<place<<" have won Rs."<<amount <<" which will be sent via your emailid "<<e_mail<< "later ";
}
getch();}


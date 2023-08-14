#include<iostream.h>
#include<conio.h>
  #include<stdlib.h>
class Distance
{
private:
int feet,inch;
public:
void get();
void set();

void put();
};
void Distance::get()
{ cout<<"\n enter feet and inch";
cin>>feet>>inch;
}
void Distance::set()
{
if(inch>11)
{
feet=feet+inch/12;
inch=inch%12;
}
}

void Distance::put()
{
cout<<"\nFeet="<<feet;
cout<<"\nInch="<<inch;
}
void main()
{
Distance A;
int n;
char ch;
clrscr();
do
{
cout<<"\npress 1.for continue";
cout<<"\npress 2. for exit";
cin>>n;
switch(n)
{
case 1:
A.get();
A.set();
A.put();
break;
case 2:
exit(0);
default:
cout<<"\n your choice is invlid";
}
cout<<"want to continue press y or n\n";
cin>>ch;
};while(ch=='y')
getch();
}


#include<iostream.h>
#include<conio.h>

class distance
{
private:
int feet,inch;
public:
void get()
{
cout<<"\n enter feet and inch";
cin>>feet>>inch;
}
void set()
{
if(inch>11)
{
feet=feet+inch/12;
inch=inch%12;
}
}

void put()
{
cout<<"\nfeet"<<feet<<"\ninch="<<inch;
}
distance add(distance,distance);
};

distance(distance d1,distance d2)
{
distance d3;
d3.feet=d1.feet+d2.feet;
d3.inch=d1.inch+d2.inch;
return d3;
}
void main()
{
distance d1,d2,d3;
clrscr();
d1.get();
d2.get();
d1.set();
d2.set();
d3=add(d1,d2);
d3.put();
getch();
}

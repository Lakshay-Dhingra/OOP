#include<iostream>
using namespace std;

class db;
class dm
{
	public:
	float m,cm;
	friend void add(dm m1, db f1,char ch);
}m1;

class db
{
	public:
	float f,in;
	friend void add(dm m1, db f1,char ch);
}f1;

void add(dm m1,db f1,char ch)
{
	float x,y;
	cout<<"The Addition is: ";
	if(ch=='m')
	{
		dm m2;
		x=(f1.f)*12 + (f1.in);
		y=x*(2.54);
		m2.m=int(y/100);
		m2.cm=y-(m2.m)*100;
		cout<<m2.m+m1.m<<" meteres and "<<m2.cm+m1.cm<<" centimeters";
	}
	else if(ch=='f')
	{
		db f2;
		x=(m1.m)*100 + (m1.cm);
		y=x/(2.54);
		f2.f=int(y/12);
		f2.in=y-12*(f2.f);
		cout<<f2.f+f1.f<<" feet and "<<f2.in+f1.in<<" inches";
	}
	else
	{
		cout<<"WRONG CHOICE!";
	}
}

int main()
{
	char ch;
	cout<<"Enter length in metres and centimeters: ";
	cin>>m1.m>>m1.cm;
	cout<<"Enter length in feet and inches: ";
	cin>>f1.f>>f1.in;
	cout<<"Display length in metres or feet (m/f)? ";
	cin>>ch;
	add(m1,f1,ch);
}


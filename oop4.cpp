#include<iostream>
using namespace std;

class db;
class dm
{
	float m,cm;
	public:
	dm()
	{
	cin>>m>>cm;
	};
	friend void add(dm &, db &,char);
};

class db
{
	float f,in;
	public:
	db()
	{
	cin>>f>>in;
	}
	friend void add(dm &, db &,char);
};

void add(dm &m1,db &f1,char ch)
{
	cout<<"The Addition is: ";
	float x,y,p,q;
	if(ch=='m')
	{
		x=(f1.f)*12 + (f1.in);
		y=x*(2.54);
		p=int(y/100);
		q=y-(p)*100;
		cout<<p+(m1.m)<<" meteres and "<<q+(m1.cm)<<" centimeters";
	}
	else if(ch=='f')
	{
		x=(m1.m)*100 + (m1.cm);
		y=x/(2.54);
		p=int(y/12);
		q=y-12*(p);
		cout<<p+(f1.f)<<" feet and "<<q+(f1.in)<<" inches";
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
	dm m1;
	cout<<"Enter length in feet and inches: ";
	db f1;
	cout<<"Display length in metres or feet (m/f)? ";
	cin>>ch;
	add(m1,f1,ch);
}


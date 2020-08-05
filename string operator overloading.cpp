#include<iostream>
#include<string.h>
using namespace std;

const int sz=100;
class mystring
{
char s[sz];
public:
	mystring()
	{
		strcpy(s,"");
	}
	mystring(char x[])
	{
		strcpy(s,x);
	}
	
	mystring operator + (mystring x)
	{
		strcat(s,x.s);
		return (*this);
	}
	
	bool operator == (mystring x)
	{
		if(strcmp(s,x.s)==0)
			return true;
		else
			return false;
	}
	void display()
	{
		cout<<s<<endl;
	}
};

int main()
{
	mystring s1 = "Hello ";
	mystring s2 = "World!";
	mystring s3;
	mystring s4 = "Hello World";
	s3=s1+s2;
	s3.display();
	cout<<(s3==s4);
}

#include<iostream>
#include<iomanip>
using namespace std;

void perfectdiv(int m, int n)
{
	char s[]="Zero Division Error!";
	try
	{
	if(n==0)
	{
		throw(s);
	}
	else if(m%n!=0)
	{
		throw(float(m)/float(n));
	}
	else
	{
		cout<<"Div is: "<<m/n<<endl;
	}
	}
	catch(float x)
	{
		throw(x);
	}
	catch(char s[])
	{
		cout<<s<<endl;
	}
}

int main()
{
	try
	{
	perfectdiv(3,2);
	perfectdiv(9,0);
	perfectdiv(6,3);
	}
	catch(float x)
	{
		cout<<"Not Perfectely Divisible, Div is:"<<x<<endl;
	}
	
	return 0;
}

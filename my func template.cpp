#include<iostream>
using namespace std;

template <class a,class b,class c>

void max(a x,b y,c z)
{
	cout<<"Max is: ";
	if(x>y)
	{
		if(x>z)
		{
			cout<<x;
		}
		else
		{
			cout<<z;
		}
	}
	else
	{
		if(y>z)
		{
			cout<<y;
		}
		else
		{
			cout<<z;
		}
	}
}

int main()
{
	float a1=3.14;
	double b1=4.789;
	float c1=9.7;
	max(3,b1,7);
}

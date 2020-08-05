#include<iostream>
using namespace std;

template <class a,class b, class c>

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
	max(2,9,4);
	max(1.9,2,4);
	return 0;
}

#include<iostream>
using namespace std;

template <class a,class b,class c>

void max(a x, b y,c z)
{
	cout<<"Max of "<<x<<", "<<y<<", "<<z<<" are:";
	if(x>y)
	{
		if(x>z)
			cout<<x;
		else
			cout<<z;
	}
	else
	{
		if(y>z)
			cout<<y;
		else
			cout<<z;
	}
	cout<<endl;
}

int main()
{
	float a=3.14;
	double b=4.789;
	float c=9.7;
	max(3,b,7);
	max(b,a,2);
	max(a,b,c);

}

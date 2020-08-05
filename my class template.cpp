#include<iostream>
using namespace std;

template <class T1, class T2>

class complex
{
	T1 r;
	T2 im;
	public:
	complex(T1 x,T2 y)
	{
		r=x;
		im=y;
	}
	void display()
	{
		cout<<r<<"+i"<<im<<endl;
	}
};

int main()
{
	int a=3;
	float b=4.5;
	complex <int,float>c1(a,b);
	c1.display();
	return 0;
}

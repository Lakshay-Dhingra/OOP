#include<iostream>
using namespace std;

class A
{
	public:
	A()
	{
		cout<<"Constructor of A"<<endl;
	}	
	~A()
	{
		cout<<"Destructor of A"<<endl;
	}
};

class B:public A
{
	public:
	B()
	{
		cout<<"Constructor of B"<<endl;
	}	
	~B()
	{
		cout<<"Destructor of B"<<endl;
	}
};

class C
{
	public:
	C()
	{
		cout<<"Constructor of C"<<endl;
	}	
	~C()
	{
		cout<<"Destructor of C"<<endl;
	}
};

class D:public C,public B
{
	public:
	D()
	{
		cout<<"Constructor of D"<<endl;
	}	
	~D()
	{
		cout<<"Destructor of D"<<endl;
	}
};

int main()
{
	D d;
}

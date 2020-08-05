#include<iostream>
using namespace std;

class complex
{
	float r,im;
	public:
//	complex(int a=0,int b=0)
//	{
//		r=a;
//		im=b;
//	}
	
	complex operator + (complex c)
	{
		complex temp;
		temp.r=r+c.r;
		temp.im=im+c.im;
		return temp;
	}
	
	complex operator - (complex c)
	{
		complex temp;
		temp.r=r-c.r;
		temp.im=im-c.im;
		return temp;
	}
	
	complex operator = (complex c)
	{
		r=c.r;
		im=c.im;
		return *this;
	}
	
	complex operator * (complex c)
	{
		complex temp;
		temp.r=r*(c.r)-im*(c.im);
		temp.im=r*(c.im)+im*(c.r);
		return temp;
	}
	
	complex operator ++()
	{
		++r;
		++im;
		return *this;
	}
	
	complex operator ++(int)
	{
		++r;
		++im;
		return *this;
	}
	
	void myget(istream &in)
	{
		cout<<"Enter Real and Imaginary part: ";
		in>>r>>im;
	}
	
	void myprint(ostream &out)
	{
		out<<"\n"<<r<<"+i"<<im;
	}
	
};

ostream & operator << (ostream &out,complex &c)
{
	c.myprint(out);
	return out;	
}

istream & operator >> (istream &in,complex &c)
{
	c.myget(in);
	return in;
}

int main()
{
complex c1,c2,c3,c4,c5,c6;
cin>>c1;
cin>>c2;
c3=c1;
cout<<c3;
c4=c1+c2;
cout<<c4;
c5=c2-c1;
cout<<c5;
c6=c1*c2;
cout<<c6;
++c3;
cout<<c3;
c3++;
cout<<c3;
return 0;		
}

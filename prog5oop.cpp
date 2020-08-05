#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		gcd(b,a%b);
}

class rational
{
	double num;
	double den;
	public:
		rational()
		{
			num=1;
			den=1;
		}
		rational(double n,double d)
		{
			num=n;
			den=d;
		}
		void reduce()
		{
			int x;
			if(num>den)
				x=gcd(int(num),int(den));
			else
				x=gcd(int(den),int(num));
			num=num/x;
			den=den/x;
		}
		
		rational operator + (rational &r)
		{
			rational temp;
			temp.num=(num*r.den)+(den*r.num);
			temp.den=(den)*(r.den);
			return temp;
		}
		
		void objprint(ostream &s)
		{
			s<<num<<"/"<<den<<endl;
		}
		void objscan(istream &s)
		{
			cout<<"ENTER THE NUMERATOR AND DENOMINATOR: ";
			s>>num>>den;
		}
};
	ostream & operator << (ostream &s,rational &z)
	{
		z.objprint(s);
		return (s);
	}
	istream & operator >> (istream &s,rational &z)
	{
		z.objscan(s);
		return (s);
	}

int main()
{
	rational x1(45.0,60.0),x2,x3;
	cin>>x2;
	cout<<"Value of X1:"<<x1;
	cout<<"Value of X2:"<<x2;
	x3=x1+x2;
	cout<<"Value of X1+X2:"<<x3;
	x3.reduce();
	cout<<"Reduced Value of X1+X2:"<<x3;
	return 0;
}

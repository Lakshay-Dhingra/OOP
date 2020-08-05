#include<iostream>
using namespace std;

void perfectdiv(int m,int n)
{
	int x;
	x=m-n;
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
			cout<<"Division is: "<<m/n<<endl;
		}
	}
	
	catch(float x)
	{
		cout<<"Not Perfectly divisible! Division is: "<<x<<endl;
	}
	catch(char x[])
	{
		cout<<x<<endl;
	}
}

int main()
{
	perfectdiv(9,5);
	perfectdiv(8,4);
	perfectdiv(7,0);
	return 0;
}

#include<iostream>
using namespace std;

class point
{
	public:
	int x,y;
	static int count;
	point(int a=0,int b=0)
	{
		x=a;
		y=b;
		count++;
	}
	static void showcount()
	{
		cout<<count<<endl;
	}
};
int point::count=0;

int main()
{
	point p1;
	cout<<"P1: x:"<<p1.x<<" y:"<<p1.y<<" count:"<<point::count<<endl;
	point p2(2,3);
	cout<<"P2: x:"<<p2.x<<" y:"<<p2.y<<" count:"<<point::count<<endl;
	point p3(6,2);
	cout<<"P3: x:"<<p3.x<<" y:"<<p3.y<<" count:"<<point::count<<endl;
	point::showcount();
	return 0;
}

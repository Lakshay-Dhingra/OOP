#include<iostream>
using namespace std;

void vol(float a)
{
	cout<<"Volume of Cube is: "<<(a*a*a)<<endl;
}

void vol(float r,float h)
{
	cout<<"Volume of Cylinder is: "<<((3.1428)*r*r*h)<<endl;
}

void vol(float a,float b,float c)
{
	cout<<"Volume of Cuboid is: "<<(a*b*c)<<endl;
}

int main()
{
	vol(4,5,6);
	vol(5);
	vol(4,5);
	return 0;
}

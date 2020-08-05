#include<iostream>
using namespace std;

namespace xyz
{
	int a=3;
}

int a=4;

int main()
{
	int a=5;
	cout<<a;
	cout<<::a;
	cout<<xyz::a;
	return 0;
}

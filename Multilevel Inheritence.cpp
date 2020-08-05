#include<iostream>
using namespace std;

class person
{
	protected:
	int age;
	float height;
	public:
	person()
	{
		cout<<"Age: ";
		cin>>age;
		cout<<"Height: ";
		cin>>height;
	}
};

class employee: public person
{
	protected:
	long int empid;
	double salary;
	public:
	employee()
	{
		cout<<"Empid: ";
		cin>>empid;
		cout<<"Salary: ";
		cin>>salary;
	}
};

class manager: public employee
{
	int no_of_emp;
	public:
	manager()
	{
		cout<<"No_Of_Emp: ";
		cin>>no_of_emp;
	}	
	void printdata()
	{
		cout<<endl<<age<<" "<<height<<" "<<empid<<" "<<salary<<" "<<no_of_emp;
	}
};

int main()
{
	manager m;
	m.printdata();
	return 0;
}

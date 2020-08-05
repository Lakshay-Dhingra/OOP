#include<iostream>
using namespace std;

class student
{
	protected:
		int rollno;
	public:
		void getroll()
		{
			cout<<"Enter the roll no.";
			cin>>rollno;
			cout<<endl;
		}
		
		void showroll()
		{
			cout<<"Roll No.: "<<rollno<<endl;
		}
};

class test:public student
{
	protected:
		float sub1,sub2,sub3;
	public:
		void getmarks()
		{
			cout<<"Enter Marks Obtained: ";
			cin>>sub1>>sub2>>sub3;
			cout<<endl;
		}
		
		void showmarks()
		{
			cout<<"Marks in Subject 1: "<<sub1<<endl;
			cout<<"Marks in Subject 2: "<<sub2<<endl;
			cout<<"Marks in Subject 3: "<<sub3<<endl;
		}
};

class result:public test
{
	float total;

	public:
		void display()
		{
			getroll();
			getmarks();
			showroll();
			showmarks();
			total=sub1+sub2+sub3;
			cout<<"Total marks of Roll No. "<<rollno<<" is: "<<total;
		}
};

int main()
{
	result r;
	r.display();
	return 0;
}

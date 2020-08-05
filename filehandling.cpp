#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outf;
	outf.open("item.txt",ios::app);
	int roll;
	char name[20];
	cout<<"Enter Name: ";
	cin>>name;
	outf<<name<<"\n";
	cout<<"Enter RollNo.: ";
	cin>>roll;
	outf<<roll<<"\n";
	outf.close();
	const int n=80;
	char line[n];
	ifstream inf("Item.txt");
//	inf>>name;
//	inf>>roll;
//	cout<<name<<" "<<roll;
	while(inf)
	{
		inf.getline(line,n);
		cout<<line<<"\n";
	}
	inf.close();
	return 0;
}

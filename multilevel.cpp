
#include<iostream>
using namespace std;
//base class
class student{
	public:
		void name()
		{
			cout<<"student name is deepak"<<endl;
		}
};
//drived class
class details:public student{
	public:
		void info()
		{
			cout<<"age is 22"<<endl;
			cout<<"address crindavan"<<endl;
		}
};
//drived class
class result:public details{
	public:
		void degree()
		{
			cout<<"bca passout"<<endl;
		}
};
int main()
{
	//obj creation of last class
	result obj;
	//function calling of base class
	obj.name();
	obj.info();
	obj.degree();
}
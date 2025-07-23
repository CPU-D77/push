#include<iostream>
using namespace std;
class ST{
	public:
		string name;
		static int count;
	public:
		ST(string Name)
		{
			name=Name;
			count++;
		}
	void disp()
	{
		cout<<"my name is: "<<name<<endl;
	}
	static int regcount()
	{
		cout<<count;
	}
		
};
 int ST::count=0;
int main()
{
	ST obj("deepak");
	ST obj1("neeraj");
	obj.disp();
	obj1.disp();
	ST::regcount();
}
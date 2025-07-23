#include<iostream>
using namespace std;
class A{
	public:
		int y;
		//int z;
	
	public:
	A(int x)
		{
		y=x;	
			cout<<"constructor is calling"<<endl;
		}
		A(A &s)
		{
			y=s.y;
			cout<<y;
		}
		
		
		void show()
		{
			cout<<y;
		}
};
int main()
{
	A obj(90);
	A obj1(obj);
	obj.show();
	
	obj1.show();
	return 0;
}
#include<iostream>
using namespace std;
class Add{
	int a,b;
	public:
	Add(int A,int B)
	{
		a=A;
		b=B;
		cout<<"first constructor: "<<a+b;
	}
	Add(const Add &add)
	{
		cout<<"copy constructor: "<<add.a+add.b;
	}
};
int main()
{
	Add ob1(3,4);
	//Add ob2(ob1);
	Add ob2=ob1;
}
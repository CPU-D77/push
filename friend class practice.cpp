#include<iostream>
using namespace std;
class AB{
	int a=12,b=12;
	friend class XY;
};
class XY{
	public:
	void sum(AB obj)
	{
		cout<<"sum of no "<<obj.a+obj.b;
	}
};
int main()
{
	AB obj;
	XY obj2;
	obj2.sum(obj);
	return 0;
}
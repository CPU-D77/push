#include <iostream>
using namespace std;
class ops{
	public:
	float area(float l,float w)
	{
		return l*w;
	}
	float area(float r)
	{
		float pi=22.7;
		return pi*r*r;
	}
};
int main()
{
ops obj;
cout<<"area of a rectangle is:"<<obj.area(15.2,2.2)<<endl;
cout<<"area of circle is :"<<obj.area(4.5)<<endl;


return 0;
}
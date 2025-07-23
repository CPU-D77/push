#include<iostream>
using namespace std;
class ABC;
class XYZ{
	
		 int a=9;
	public:
		/*void get(int i)
		{
			a=i;
		}*/
friend void sum(ABC,XYZ);
};
class ABC{
	int x;
	public:
		void get(int y)
		{
			x=y;
		}
		friend void sum(ABC,XYZ);
	
};
void sum(ABC A,XYZ X){
	cout<<"sum of both no is"<<X.a+A.x;
}
int main()
{
	ABC abc;
	abc.get(3);
	XYZ xyz;
//	xyz.get(9);
	sum(abc,xyz);
	return 0;
}
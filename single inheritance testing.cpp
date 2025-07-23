#include<iostream>
using namespace std;
class a{
	public:
		void a1()
		{
			cout<<"parent function calling"<<endl;
		}
};
class b:public a{
	public:
		void b1()
		{
			cout<<"child function calling"<<endl;
		}
};
int main()
{
	b obj;
	obj.a1();
	obj.b1();
	return 0;
}
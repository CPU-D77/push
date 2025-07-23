#include<iostream>
using namespace std;
class A{
	public:
		inline void get()
		{
			cout<<"this is inline function";
		}
};
int main()
{
	A obj;
	obj.get();
	return 0;
}
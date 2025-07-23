#include<iostream>
using namespace std;
int add(int x,int y,int z)
{
	cout<<x+y;
}
double add(double x,double y,double z)
{
	cout<<x+y;
}
int main()
{
	add(9,5,6);
	add(5.5,6.6,8.7);
	return 0;
}
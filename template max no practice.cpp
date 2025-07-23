#include<iostream>
using namespace std;
template<class T>
T maax(T a,T c)
{
	return a>c?a:c;
}
int main()
{
	cout<<maax(7,8);
	return 0;
}
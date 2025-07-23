#include<iostream>
using namespace std;
class Area
{
public:
	float area,l,w;
	float r,pi=3.17;
public:
	void getdata_rect();
	void getdata_circle();
	void showarea_rect();
	void showarea_circle();

};
void Area::getdata_rect()
{
	cout<<"enter the length and width of rectangle";
	cin>>l>>w;
}
void Area::showarea_rect()
{
	area=l*w;
	cout<<"area of rectangle is"<<area;
}
void Area::getdata_circle()
{
	cout<<"enter the redious of circle";
	cin>>r;
}
void Area::showarea_circle()
{
	area=pi*r*r;
	cout<<"area of circle is"<<area;
}
int main()
{

Area obj;
obj.getdata_rect();
obj.showarea_rect();
obj.getdata_circle();
obj.showarea_circle();
}


#include<iostream>
using namespace std;
//base class
class car{
	public:
		//base class function
		void color(){
			cout<<"this car color is black"<<endl;
		}
};
//dribed class
class speed:public car{
	public:
		//drived function
		void Speed()
		{
			cout<<"this car speed is 250"<<endl;
		}
};
int main()
{
	//obj declare to drived class
	speed properties;
	//base class function
	properties.color();
	//drived function
	properties.Speed();
	return 0;
}
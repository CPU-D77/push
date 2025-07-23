#include<iostream>
using namespace std;
class Test{
	private:
		void privatedisplay();
	protected:
		void protecteddisplay();
	public:
		void publicdisplay();
};
void Test::publicdisplay(){
	cout<<"calling public member function"<<endl;
}
void Test::protecteddisplay(){
	cout<<"calling private member function"<<endl;
}
int main()
{
	Test obj;
	obj.publicdisplay();
	//obj.protecteddisplay();
	
}


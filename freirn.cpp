#include<iostream>
using namespace std;
class box{
	private:
		int l;
		public:
			box(int no){
			l=no;}
			friend void display(box);
};
void display(box b){
	cout<<"length of box "<<b.l<<endl;
}
int main()
{
	box obj(12);
	display(obj);
	return 0;
}
#include <iostream>
using namespace std;
class Cal{
private:
int a;
protected:
	int b;
public:
Cal(int x,int y){
	a=x;
	b=y;
	
}
friend void displaysum(Cal );
};



void displaysum(Cal B){
cout<<"sum of both values:"<<B.a+B.b<<endl;
}
int main() {
Cal obj(12,12);
displaysum(obj);


return 0;
}



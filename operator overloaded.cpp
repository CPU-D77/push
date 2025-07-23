#include<iostream>
using namespace std;
class complex{
float real;
float imag;
public:
complex(float r=0,float i=0){
real=r;
imag=i;
}
complex operator +(const complex& obj){
complex result;
result.real=real+obj.real;
result.imag=imag+obj.imag;
return result;

}
//Display function
void display(){
cout<<real<<"+"<<imag<<"i"<<endl;
}
};
int main(){
complex c1(3.5,9.5),c2(1.5,4.5);
complex c3=c1+c2;
cout<<"First complex number:";
c1.display();
cout<<"second complex number:";
c2.display();
cout<<"Sum: ";
c3.display();
return 0;
}
#include <iostream>
using namespace std;
int sum(int a){
return a+a;
}
int sum(int a,int b){
return a+b;
}
double sum(double x,double y){
return x+y;
}
int main()
{
cout<<"Sum of a and a is"<<sum(10)<<endl;
cout<<"Sum of a and b is"<<sum(100,250)<<endl;
cout<<"Sum of floats are (x and y) is"<<sum(25.22,45.22)<<endl;


return 0;
}
//multilevel inheritance
#include<iostream>
using namespace std;
//Base class
class Car{
public:
void specialisation(){
cout<<"German Cars are the best"<<endl;
}

};
//Derived class 1
class Supra:public Car{
public:
void sound(){
cout<<"Rata Ta Ta "<<endl;

}
};
//Derived class 2
class Looks:public Supra{
public:
void design(){
cout<<" Designed very good with super special color combo."<<endl;

}
};
int main(){
Looks mycar; // object of derived class created
mycar.specialisation(); //accessing members of base class
mycar.sound();//accessing members of derived class 1
mycar.design();//accessing members of derived class 2
return 0;
}
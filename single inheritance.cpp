//Single inheritance
#include<iostream>
using namespace std;
//Base class
class Animal{
public:
void eat(){
cout<<"This element eats food."<<endl;
}

};
//Derived class
class Dog:public Animal{
public:
void bark(){
cout<<"The dog barks"<<endl;

}
};
int main(){
Dog myDog; // object of derived class created
myDog.eat(); //accessing members of base class
myDog.bark();//accessing members of derived class

return 0;
}
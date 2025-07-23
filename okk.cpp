#include<iostream>
using namespace std;
class Emp{
public:
string name,address;
int age,mob,id;
static int count; //static data member declaration
public:
Emp(int Id,string Name,string Address,int Age,int Mob){
	name=Name;
	address=Address;
	age=Age;
	mob=Mob;
	id=Id;
count++;
}

static int RegCount(){
return count;
}
void disp(){
cout<<"ID "<<id<<" name: " <<name<<" address: "<<address<<" age: "<<age<<" mob: "<<mob<<endl;
}
};

int Emp::count=0; //initializing static member
int main(){
Emp r1(1,"deepak","vrindavan",22,657657);
Emp r2(2,"mohit","mathura",24,657657);
Emp r3(3,"sonu","vr",21,657657);
Emp r4(4,"rahul","chhatikara",22,657657);
Emp r5(5,"ram","delhi",25,657657);
r1.disp();
r2.disp();
r3.disp();
r4.disp();
r5.disp();


cout<<"Total Registration Count:"<<Emp::RegCount()<<endl;

return 0;
}
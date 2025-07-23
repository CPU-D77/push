#include<iostream>
using namespace std;
class Student{
private:
int rollNumber;
static int count; //static data member declaration
public:
Student(int r):rollNumber(r){
	//rollNumber=r; short declaration
count++;
}

static int getCount(){
return count;
}
void disp(){
cout<<"Roll Number: " <<rollNumber<<endl;
}
};

int Student::count=0; //initializing static member
int main(){
Student s1(101);
Student s2(102);
Student s3(106);
s1.disp();
s2.disp();
s3.disp();

cout<<"Total Students:"<<Student::getCount()<<endl;

return 0;
}
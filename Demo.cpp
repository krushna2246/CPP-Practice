#include<iostream>
#include<cstring>
using namespace std;
class Student{
char name[20];
int id;
float sal;

public :
//default constructor
Student(){
strcpy(name,"No name");
id=0;
sal=0.0;
}
//parameterized contructor
Student(char *str,int i,float s){
	strcpy(name,str);
id=i;
sal=s;
}
//copy contructor
Student(Student &obj){
	cout<<"This is Copy Constructor"<<endl;
	strcpy(name,obj.name);
	id=obj.id;
	sal=obj.sal;
}

void show(){
cout<<"Name :"<<name<<endl<<"ID :" <<id<<endl<<"Sal :"<<sal<<endl; 
}

};
int main(){
Student obj;
Student obj1("Krushna",101,100000.0);
Student obj2(obj1);
obj.show();
obj1.show();
obj2.show();
}

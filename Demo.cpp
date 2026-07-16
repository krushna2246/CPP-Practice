#include<iostream>
using namespace std;
class Student{
public :
int id;
void set_id(int ID){
id=ID;
}
void display(){
cout<< "ID :"<<id;
}
};
int main(){
Student obj;
obj.set_id(101);
obj.display();
}

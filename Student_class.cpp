#include<iostream>
#include<cstring>
using namespace std;
class Student{
    
    int id;
    char name[20];
    float marks;
    public :
    void set_id(int Id){
        id=Id;
    }
    void set_name(char *str){
        strcpy(name,str);
    }
  
    void set_marks(float mar){
        marks=mar;
    }
    void display(){
        cout<<"Id :"<<id<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Marks :"<<marks<<endl;
    }
};
int main(){
    Student obj;
    obj.set_id(101);
    obj.set_name((char *)"krushna");
    obj.set_marks(67.99);
    obj.display();
    // cout<<obj.id;
}
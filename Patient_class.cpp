#include<iostream>
#include<cstring>
using namespace std;
class Patient{
int pid;
char gender[10];
int age;
public :
void set_values(int id,char *gen,int Age){
    pid=id;
    strcpy(gender,gen);
    age=Age;
}
void display(){
    cout<<"Id:"<<pid<<endl;
    cout<<"Gender:"<<gender<<endl;
    cout<<"Age:"<<age<<endl;
}
};
int main(){
    Patient obj;
    obj.set_values(101,"Male",22);
    Patient obj2;
    obj2.set_values(102,"Female",20);
    obj.display();
    obj2.display();
}
#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
    int id;
    char name[50];
    float sal;

public:
    void set_id(int ID)
    {
        id = ID;
    }
    void set_name(char *ptr)
    {
        strcpy(name, ptr);
    }
    void set_sal(float salary)
    {
        sal = salary;
    }
    void display()
    {
        cout<<"Id :"<<id<<endl;

         cout<<"Name :"<<name<<endl;
        
          cout<<"Salary :"<<sal<<endl;
        
    }
};
int main()
{
    Employee obj;
    obj.set_id(101);
    obj.set_name("Krushna");
    obj.set_sal(1000.01f);
    obj.display();
}
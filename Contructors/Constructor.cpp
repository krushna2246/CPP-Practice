#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    int emp_id;
    char emp_name[20];
    int emp_salary;
    public:
    Employee() // Default constructor
    {
        emp_id = 0;
        strcpy(emp_name, "No Name");
        emp_salary = 0;
    }
    void set_name(char name[])
    {
        strcpy(emp_name, name);
    }
    void set_id(int id)
    {
        emp_id = id;
    }
    void set_salary(int salary)
    {
        emp_salary = salary;
    }
    void display()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Salary: " << emp_salary << endl;
    }   
};
int main()
{
    Employee emp1;
    emp1.set_id(101);
    emp1.set_name("Krushna");
    emp1.set_salary(50000);

    emp1.display();

    return 0;
}
#include <iostream>//iostream is class 
#include <cstring>
using namespace std; //namespace is the folder 
class Employee
{
    char name[20];
    int id;
    float sal;

public:
    void set_name(char *nm)
    {
        strcpy(name, nm);
    }
    void set_id(int ID)
    {
        id = ID;
    }
    void set_sal(float Salary)
    {
        sal = Salary;
    }
    char *get_name()
    {
        return name;
    }
    int get_id()
    {
        return id;
    }
    float get_sal()
    {
        return sal;
    }
    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << sal << endl;
    }
};
int main()
{
    Employee obj;

    char nm[20];
    int ID;
    float Salary;
    cout << "Enter the name";
    cin >> nm;
    cout << "Enter the ID";
    cin >> ID;
    cout << "Enter Salary";
    cin >> Salary;

    obj.set_name(nm);
    obj.set_id(ID);
    obj.set_sal(Salary);
    obj.display();
}
#include <iostream>
using namespace std;
class Salary
{
    float Basic_Salary, Dearness_allowance, Home_Rent_Allowance, Travel_Allowance, Gross_Salary;

public:
    void set_Allowance(float Basic_Salary1)
    {
        if (Basic_Salary1 > 90000)
        {
            Basic_Salary = Basic_Salary1;
            Dearness_allowance = Basic_Salary * 20 / 100;
            Home_Rent_Allowance = Basic_Salary * 15 / 100;
            Travel_Allowance = Basic_Salary * 10 / 100;
            Gross_Salary = Dearness_allowance + Home_Rent_Allowance + Travel_Allowance + Basic_Salary;
        }
        else
        {
            cout << "Bhagg jao"<<endl;
            Gross_Salary = 0;
        }
    }

    float get_allowance()
    {
        return Gross_Salary;
    }
};
int main()
{

    Salary obj;
    float Basic_Salary;
    cin >> Basic_Salary;
    obj.set_Allowance(Basic_Salary);
    cout << "Gross Salary:" << obj.get_allowance();
}
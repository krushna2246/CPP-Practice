#include <stdio.h>
int main()
{
    float TA = 10, DA = 20, HRA = 50, basicsalary, grosssalary;
    printf("enter basicsalary\n");
    scanf("%f", &basicsalary);
    // TA=(TA*basicsalary)/100;
    // DA=(DA*basicsalary)/100;
    // HRA=(HRA*basicsalary)/100;
    grosssalary = (((TA + DA + HRA) / 100) * basicsalary) + basicsalary;

    printf("%f \n %f \n %f \n", TA, DA, HRA);
    // grosssalary = TA + DA + HRA+basicsalary ;
    if (grosssalary > 500000)
    {
        printf("hii");
        grosssalary = grosssalary - (grosssalary * (10 / 100));
    }
    printf("final grosssalary %f", grosssalary);
}
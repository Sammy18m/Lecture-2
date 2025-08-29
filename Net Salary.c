#include<stdio.h>

int main ()

{
    float gross, allowances, deductions,net;

    printf("Enter Gross Salary");
    scanf("%f",&gross);

    allowances = (gross>10000)? 0.10*gross :
                 (gross>5000)?  0.07*gross : 0 ;


    deductions = (gross>10000)? 0.03*gross :
                 (gross>5000)?  0.02*gross : 0 ;


    net = (gross + allowances - deductions);

    printf("The Net Salary is %.2f",net);

}

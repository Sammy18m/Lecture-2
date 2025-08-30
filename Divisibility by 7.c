#include<stdio.h>

int main ()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    (n%7==0)?printf("The Number is divisible by 7"):printf("The Number is not divisble by 7");
}

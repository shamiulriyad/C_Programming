#include<stdio.h>

void calculatepower(double base, double expo)
{
    double result=1,i;
    for(i=1; i<=expo;i++)
    {
        result =result * base;
    }

    printf("%lf\n",reult);
}

int main()
{
    int base, expo;
    printf("Enter the value :");
    scanf("%d",&base);
    printf("enter the value :");
    scanf("%d",&expo);
    calculatepower(base,expo);

}
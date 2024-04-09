#include<stdio.h>


int square(int a)
{
    return a*a;
}
int main()
{
    int num;
    printf("enter any integer num  : ");
    scanf("%d",&num);
    int result = square(num);
    printf("square is : %d\n", result);
}
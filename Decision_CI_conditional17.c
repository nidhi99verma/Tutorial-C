#include<stdio.h>
int main()
{
    int x;
    printf("Please enter number : ");
    scanf("%d",&x);
    // condition ? statement(if's) : statement(else's)
    x > 0 ? printf("Your number %d is positive number",x) : printf("Your number %d is non positive number",x);
}
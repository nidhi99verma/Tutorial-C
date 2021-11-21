#include<stdio.h>                  // control instruction
int main()
{
    int x;
    printf("Please enter number : ");
    scanf("%d",&x);
    if(x > 0)
    {
        printf("Your number %d is positive number",x);
    }
    if(x <= 0)
    {
        printf("Your number %d is non positive number",x);
    }
}
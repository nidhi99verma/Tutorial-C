#include<stdio.h>
int main()
{
    int x;
    printf("Please enter number : ");
    scanf("%d",&x);
    if(x > 0)
    {
        printf("Your number %d is positive number",x);
    }
    else if (x < 0)
    {
        printf("Your number %d is negative number",x);
    }
    else
    {
        printf("Your number %d is zero number",x);
    }
    
}
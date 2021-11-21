#include<stdio.h>
int main()
{
    int x;                                                        // declearation statement
    printf("Please enter number : ");                            //action statement 1
    scanf("%d",&x);                                             //action statement  2
    if(x > 0)
    {
        printf("Your number %d is positive number",x);          //action statement   3
    }
    else
    {
        printf("Your number %d is non positive number",x);       //action statement    3            
    }
}
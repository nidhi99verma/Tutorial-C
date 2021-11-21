#include<stdio.h>
int main()
{
    int x = 6, y;
    int a = 4, b;
    y = x++;                        //1: assignment operator then increment
    printf("x=%d \ny=%d \n",x,y);   //post increment
    b = ++a;                        //1: increment operator then assignment
    printf("a=%d \nb=%d",a,b);      //pre increment
}
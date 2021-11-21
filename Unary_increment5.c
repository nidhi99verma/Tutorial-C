#include<stdio.h>
int main()
{
    int x = 4;
    x++;               //post increment(less priority)
    printf("%d\n",x);
    ++x;               //pre increment
    printf("%d",x);
}
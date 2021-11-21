#include <stdio.h>
int main() 
{
    int k;
    int sum(int);                            // declearation
    k = sum(3);                              // call
    printf("%d",k);
}
int sum (int a)                             // define
{
    int s;
    if (a == 1)
        return(a);
    s = a + sum(a - 1);
        return(s);    
}
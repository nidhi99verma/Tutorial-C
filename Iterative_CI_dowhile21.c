#include<stdio.h>
int main()
{
    int a = 10;                            // local variable definition
    do{                                    // do loop execution
       printf("value of a : %d\n", a);
       ++a;
    }while (a < 21);
}
#include<stdio.h>
int main()
{
    int x;
    //arange accordin to priority
    //1
    // x = 3 < 4;
    // x = 3 > 4;
    // x = 5 > 4 > 3;            //LtoR

    // left to right(relational to assignment)
    // x = 3 <= 4;
    // x = 3 >= 4;

    //2
    // x = 3 == 4;
    x = 3 != 4;
    printf("%d",x);
}
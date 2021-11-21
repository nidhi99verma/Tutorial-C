#include<stdio.h>
int main()
{
    int x;
    // x = 2+3;
    // x = 3-4;
    // x = 4.1*2;
    // x = 9.0/4;
    // x = 11%5;
    x = 2+1-4*5/1%8;             //2+1-20/1%8>>>2+1-20%8>>>2+1-4>>>3-4>>>-1
    printf("%d",x);              //*,/,%>>1st priority LtoF use>> +,- 2nd priority
}
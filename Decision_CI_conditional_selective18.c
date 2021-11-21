#include<stdio.h>    // selective assignment
int main()
{
    //int x, y, max;
    int x, y;
    printf("Please enter two number : ");
    scanf("%d %d",&x,&y);
    // max = x > y ? x : y;
    // printf("Greater value is %d",max);
    printf("Greater value is %d",x > y ? x : y);
}
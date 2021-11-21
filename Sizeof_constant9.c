#include<stdio.h>
int main()
{
    int x, y, z;
    x = sizeof(12);     //int
    y = sizeof(99.99);  //double
    z = sizeof('a');    //'a' treat like int because of ASCII Code of char>>here a's ACSII code is 97
    printf("x=%d \ny=%d \nz=%d",x,y,z);  // in bytes

}
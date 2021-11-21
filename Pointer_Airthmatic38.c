#include <stdio.h>
int main()
{
    int a = 5, b = 4;
    int *p, *q;
    p = &a;
    q = &b;
    printf("%d\np:",p);
    printf("%d\n",p+1);
    printf("%d\n",p-1);
    printf("%d\n",p+2);

    // not possible
    //printf("%d\n",p+q);
    //printf("%d\n",p*q);
    //printf("%d\n",p*5);
    //printf("%d\n",p\q);
    //printf("%d\n",p\4);
    
    printf("%d\nq:",q);
    printf("%d\n",q+1);
    printf("%d\n",q-1);
    printf("%d\n",q+2);

    printf("%d\n",p - q);
    printf("%d\n",&a - &b);
}
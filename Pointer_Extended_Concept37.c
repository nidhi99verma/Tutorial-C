#include <stdio.h>
int main()
{
    int x = 5, *p,**q,***r;
    p = &x;
    q = &p;
    r = &q;
    printf("%d\n",x);
    printf("%u\n",p);
    printf("%u\n",q);
    printf("%u\n",r);
}
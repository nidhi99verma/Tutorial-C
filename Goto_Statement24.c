#include <stdio.h>
int main()    
{
    int n;
    label:

    printf("Please enter number : ");
    scanf("%d",&n);

    if (n < 100)
    {
        printf("Entered number %d is less then 100\n",n);
        goto label;
    }
    else
    {
        printf("Entered number %d is greatar then 100\n",n);
    }
}
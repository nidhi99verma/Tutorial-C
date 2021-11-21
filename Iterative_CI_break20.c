#include<stdio.h>
int main()
{
    int i = 1, x;
    while (i <= 5)
    {
        printf("Enter number :");
        scanf("%d",&x);
        if(x > 0)
            break;
        ++i;     
    }
i == 6 ? printf("ends normally") : printf("applied break");    
}
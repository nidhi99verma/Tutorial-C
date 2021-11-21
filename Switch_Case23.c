#include <stdio.h>
#include <stdlib.h>    // for exit()
int main()
{
    int choice, a, b, s;

    while (1)
    {
        
    printf("\n1. Addition");
    printf("\n2. Odd-Even");
    printf("\n3. Printing n numbers");
    printf("\n3. Exit");

    printf("\n\nEnter Your Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter two numbers : ");
            scanf("%d%d", &a,&b);
            s = a + b;
            printf("\nSum is %d\n",s);
            break;
        case 2:
            printf("Enter one numbers : ");
            scanf("%d", &a);
            if (a % 2 == 0)
                printf("%d is Even Number\n",a);
            else
                printf("%d is Odd Number\n",a);
            break;
        case 3:
            printf("Enter a number : ");
            scanf("%d",&a);
            for(b = 1; b <= a; b++)
                printf(" %d",b);
            break;
        case 4:
            exit(0);
        
        default:
            printf("Invalid Choice");        
    }
    }
}
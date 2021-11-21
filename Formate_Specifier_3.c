#include<stdio.h>
int main()
{
    int a = 4;
    float b = 5;
    char c = 'N';
    long d = 299999999;
    double e = 25999999999999999;
    double f =99.99;
    char* g = "Nidhi";     
    char gg[] = "geeksforgeeks"; 
    unsigned int h = 7;
    unsigned long i = 8;
    int j = 67;
    int k = 15;

    printf("%d",a);                       //  same as %i
    printf("\n------\n");

    printf("%f",b);
    printf("\n------\n");
    
    printf("%c",c);
    printf("\n------\n");
    
    printf("%ld",d);
    printf("\n------\n");

    printf("%lf",e);
    printf("\n------\n");

    printf("%Lf",f);          //long double
    printf("\n------\n");

    printf("%s\n",g);
    printf("%20s\n",gg); 
    printf("%-20s\n",gg); 
    printf("%20.5s\n",gg); 
    printf("%-20.5s\n",gg); 
    printf("\n------\n");

    printf("%n",a);
    printf("\n------\n");

    printf("%d %%",a);
    printf("\n------\n");

    printf("%u %u",h,i);
    printf("\n------\n");

    printf("%e",a);                // same as %E
    printf("\n------\n");

    printf("%o",j);
    printf("\n------\n");

    printf("%x",k);               // same as %X
    printf("\n------\n");


    return 0;

}

// https://www.geeksforgeeks.org/format-specifiers-in-c/
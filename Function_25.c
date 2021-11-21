#include <stdio.h>
int main()
{
add();                                                  // call
sub();                 
mul();
div();
}
add()                                                  // define
{
    int a, b, c;
    printf("Enter two Number : ");
    scanf("%d%d", &a ,&b);
    c = a + b;
    printf("Sum of %d and %d is = %d\n", a, b, c);
}
sub()                                                  // define
{
    int a, b, c;
    printf("Enter two Number : ");
    scanf("%d%d", &a ,&b);
    c = a - b;
    printf("Subtraction of %d and %d is = %d\n", a, b, c);
}
mul()                                                  // define
{
    int a, b, c;
    printf("Enter two Number : ");
    scanf("%d%d", &a ,&b);
    c = a * b;
    printf("Multification of %d and %d is = %d\n", a, b, c);
}
div()                                                 // define
{
    int a, b, c;
    printf("Enter two Number : ");
    scanf("%d%d", &a ,&b);
    c = a / b;
    printf("Division of %d and %d is = %d\n", a, b, c);
}
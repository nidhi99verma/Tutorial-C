#include <stdio.h>
void swap(int * , int *);
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    // function call by reference(address)
    swap(&a, &b); //actual argument
    printf("a=%d, b=%d",a,b);
}
// formal argument k value mai keya gya koie b change actual argument k value mai change nhe hoga
// but x and y pointer and actul argument in pass value is address of a and b not value
void swap(int *x, int *y) // formal argument
{//when argument in pass pointer it means function call by refernce
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
//scanf use address of variable to store value in variable because
// main() have a and b variable and scanf() use address of &a and &b to put value in variable's place
// jab tak scanf() value nhe pass kerta a and b k address per a and b mai garbage value hote hai
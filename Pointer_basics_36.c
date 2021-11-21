#include <stdio.h>
int main()
{
    int x = 5;
    //pointer
    int *j ;  // * helps to compiler that this variable store address of variable ....not a ordinary varianle
    printf("%d\n",x);
    // & >> address of operator or reference operater
    printf("%d\n",&x);   // address of memory block 'x' 
    // use %u because adress in 0 to 65535....but in %d value -32768 to 32767
    // * >>indirection operator
    printf("%d\n",*&x);  // return the content/container whose address its argument
    j = &x;            // store address of 'x' in j variable
    printf("%d\n",j);
    // *j = x ager pointer k sath * ho to pointer jis variable ka address rakha h vo variable ke value btaa rha h
    // if *& both come together that means simple value of variable
    printf("-----------");
    printf("\n%d - %u\n",x,j);
    printf("%d - %u\n",*j,&x);
    printf("%u\n",*&j);

}
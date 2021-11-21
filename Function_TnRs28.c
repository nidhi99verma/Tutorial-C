#include <stdio.h>         // Takes Nothings, Return somthings
//int add(void);           // global declearation
int main()
{ 
  int s;
  s = add ();
  printf("Sum is %d",s);             
}   
int add ()                // takes nothing
{
    int a, b, c;
    printf("Enter two Number : ");    
    scanf("%d%d", &a ,&b);
    c = a + b;             // return(a + b);
    return(c);            // return somtings// through return we can return only 'one' value
    // return k baad lekha code execute nhe hoga
}
 
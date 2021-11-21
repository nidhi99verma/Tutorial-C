#include <stdio.h>                  // Takes somthings, Return somthings
int add(int, int);                  // Takes somthings
int main()
{ 
  int s, x, y;
  printf("Enter two Number : ");    
  scanf("%d%d", &x ,&y);
  s = add (x, y);
  printf("Sum is %d",s);  
}   
int add (int a, int b)              // Takes somthings    
{
    int c;
    c = a + b;             
    return(c);                      // Return somthings
}
 
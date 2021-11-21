#include <stdio.h>         // Takes somthings, Return Nothings
//void add(int, int);      // global declearation(acessable for all function)
void main()
{ 
  int x, y;  
  void add (int, int);     // Takes somthings// void said that return nothings// local declearation(acessable for main ())
  printf ("Enter two Numbers : ");
  scanf ("%d %d", &x, &y);   
  add (x, y);             // Actual Arguments(call by values)
}   
void add (int a, int b)   // formal arguments
{
    int c;
    c = a + b;
    printf ("Sum of %d and %d is = %d\n", a, b, c);
}
 
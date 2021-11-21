#include <stdio.h> //Takes nothing, Return Nothings
void main()
{
  void add(void);    //Takes Nothing (blank=void), function declearation(use onley in compilation)
  add();
}   
void add()   //Takes Nothing (blank), void defines that function does't return anything
{
    int a, b, c;
    printf("Enter two Number : ");    // Takes Somthings(xyz)
    scanf("%d%d", &a ,&b);
    c = a + b;
    printf("Sum of %d and %d is = %d\n", a, b, c);
}
// function define kerne aur declerne per return type lekna zaroore hai(this is for compiler)
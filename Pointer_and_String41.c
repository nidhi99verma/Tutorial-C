#include <stdio.h>

int length(char*);
void reverse(char*); 
int main()
{
  printf("%d",length("Computer"));  
  char str[100] = "Computer";
  reverse(str);
  printf("\n%s", str);
}
int length(char *p)
{
    int i;
    for (i=0; *(p+i)!='\0'; i++);
    return(i);
}

void reverse(char *p)
{
    int l, i;
    char t;
    // find length : l
    for (l=0; *(p+l)!='\0'; l++);
    // swap first to least
    for (i=0; i < l/2; i++)
    { 
        t = *(p+i);
        *(p+i) = *(p + l - 1 - i);
        *(p+l-1-i) = t;
        
    }
}


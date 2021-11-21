#include<stdio.h>
int main()
{
    char* a = "A\0725"; 
    char* b = "B\x4a"; 

    printf(" Hello Nidhi \n");

    printf("Ajai V\bVerma ");
    printf("\n-------\n");

    printf("This is backslash \\");
    printf("\n-------\n");

    printf("This is \"Double Quote\"");
    printf("\n-------\n");

    printf("\tTab Space");                  // Horizontal Tab
    printf("\n-------\n");

    printf("Hello fri\r ends");               //To take control at starting of same line. //To take control at starting of next page.
    printf("\n-------\n");

    printf("\vNidhi");                      // Vertical Tab
    printf("\n-------\n");

    printf("This is \'Single Quote\'");
    printf("\n-------\n");

    printf("How are You \?");
    printf("\n-------\n");

    // printf("\nnn234");   // We use it to represent an octal number.
    // printf("\n-------\n");

    printf("%s",a);     // we are using \OOO escape sequence, here each O in "OOO" is one to three octal digits(0....7). 
    printf("\n-------\n");

    printf("%s",b);    // \xhh  Here hh is one or more hexadecimal digits(0....9, a...f, A...F). 
    printf("\n-------\n");

    printf("bell sound\a"); 
    printf("\n-------\n");

    printf("\012");                 //null
    printf("\n-------\n");

    printf("\t\e,");
    printf("\n-------\n");
    return 0;   
}
// https://www.geeksforgeeks.org/escape-sequences-c/
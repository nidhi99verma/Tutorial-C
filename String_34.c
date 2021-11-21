#include <stdio.h>
// int main()
// {
//     //char s[10] = {'N', 'I', 'D', 'H', 'I', '\0'};   // \0 null character: end of char
//     char s[10] = "NIDHI";
//     int i;
//     //for (i = 0; i < 4; i++)
//     //for (i = 0; i < 5; i++)
//     for (i = 0; s[i] != '\0'; i++)
//         printf("%c",s[i]);

//     printf("\n%s\n",s);                     // other way
//     puts(s);             // does't need to use formate specefier : it's works only for string and change line automatically
//     puts(s);
// }


//2

int main()
{
    char s[20];
    printf("Enter Your Name : ");
    //scanf("%s",&s[0]);                        // String in " "space is delimeter(data seprater) for scanf
    gets(s);                                    // enter  is delimeter for gets
    puts(&s[0]);
}

//in array, array name is like address of array(&s = s)
//printf("%s",s[0]); OR //printf("%s",&s[0]);  BOTH SAME in case of array
#include <stdio.h>
// int main()
// {
//     int a[5], i, *p;
//     p = &a[0];
//     printf("Please Enter 5 numbers : ");
//     for (i=0; i<=4; i++)
//        //scanf("%d",&a[i]);
//         scanf("%d",p+i);
//     for (i=0; i<=4; i++)
//         //printf("%d",a[i]);
//         printf("%d",*(p+i));     // a[i] = *(p+i)
// }


//2
void input(int *);
void display(int *);
void sort(int *);
int main()
{
    int a[5];
    input(a);  //array ka bus naam lekhna array k base addres(1st block k) ko pass kerna h
    display(a);
    sort(a);
    display(a);
}

void input(int *p)
{
 int i;
 printf("Please Enter 5 numbers : ");
 for (i=0; i<=4; i++)
    scanf("%d",p+i);                    //&a[i] = (p+i)
}

void display(int *p)
{
 int i;
 printf("\n------------\n");
 for (i=0; i<=4; i++)
    printf("%d\n",*(p+i));
}
// bubble sorting
void sort(int *p)
{
    int round, t, i;
    for(round = 1; round<=4; round++)
    {
        for(i=0; i<=4-round; i++)
         if(*(p+i) > *(p+i+1))
         {
             t = *(p+i);
             *(p+i) = *(p+i+1);               //a[i] = *(p+i)
             *(p+i+1) = t;
         }
    }
}
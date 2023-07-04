#include<stdio.h>
#include<conio.h>
void main()
{
   int a,n;
   clrscr();
   printf("enter the value =");
   scanf("%d",&n);
   for(a=2000 ; a<=n ; a++)
   {
     if(a%4==0)
     {
      printf("%d\n",a);
     }
   }
    getch();
}
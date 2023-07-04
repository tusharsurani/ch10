#include<stdio.h>
#include<conio.h>
void main()
{
   int a=1,n,f=1;
   clrscr();
   printf("enter the value =");
   scanf("%d",&n);
   do
   {
      f=f*a;
      a++;
   }while(a<=n);
   printf("the fectorial of %d is %d",n,f);
   getch();
}
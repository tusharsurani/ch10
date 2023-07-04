#include<stdio.h>
#include<conio.h>
void main()
{
   int a=1,n,x;
   clrscr();
   printf("enter intiger=");
   scanf("%d",&n);
   printf("how many time=");
   scanf("%d",&x);
   do
   {
      printf("%d * %d = %d\t",n,a,n*a);
      a++;
   }while(a<=x);
   getch();
}
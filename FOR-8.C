#include<stdio.h>
#include<conio.h>
void main()
{
   int a,n,sum=0;
   clrscr();
   printf("enter the value =");
   scanf("%d",&n);
   for(a=1 ; a<=n ; a++)
   {
     sum=sum+a;
   }
   printf("the sum offist %d number is %d",n,sum);
   getch();
}
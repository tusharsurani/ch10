#include<stdio.h>
#include<conio.h>
void main()
{
  int a=1,n,sum=0;
  clrscr();
  printf("enter value=");
  scanf("%d",&n);
  do
  {
    sum=sum+a;
    a++;
  }while(a<=n);
  printf("sum = %d",sum);
  getch();

}
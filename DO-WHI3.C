#include<stdio.h>
#include<conio.h>
void main()
{
  int a=1,n;
  clrscr();
  printf("enter value =");
  scanf("%d",&n);
  do
  {
  printf("%d\t",a);
  a++;
  }
  while(a<=n);
  getch();
}
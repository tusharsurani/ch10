#include<stdio.h>
#include<conio.h>
void main()
{
  int a,n;
  clrscr();
  printf(" enter value A=");
  scanf("%d",&a);
  printf("enter value N=");
  scanf("%d",&n);
  do
  {
  printf("%d\t",a);
  a--;
  }
  while(a>=n);
  getch();
}
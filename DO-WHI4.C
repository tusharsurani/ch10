#include<stdio.h>
#include<conio.h>
void main()
{
  int a=1,n;
  clrscr();
  printf("enter value N=");
  scanf("%d",&n);
  do
  {
  printf("%d\t",n);
  n--;
  }
  while(a<=n);
  getch();
}
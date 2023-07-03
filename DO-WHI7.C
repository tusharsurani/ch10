#include<stdio.h>
#include<conio.h>
void main()
{
  int a=2000,n;
  clrscr();
  printf("enter value =");
  scanf("%d",&n);
  do
  {
    if(a%4==0)
    {
      printf("%d\t",a);
    }
    a++;
  }while(a<=n);
  getch();
}
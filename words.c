#include<stdio.h>
#include<conio.h>
void main()
{
  int i,count=0;
  char a[80];
  clrscr();
  printf("Enter string: ");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=' '&&a[i+1]!=' ')
    {
      count++;
    }
  }
  printf("Number of words are %d",count);
  getch();
}

#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  printf("Enter character=");
  scanf("%c",&ch);
  if(isspace(ch))
     printf("space is present in character");
  else
   printf(" space is not present in  Character  ");
}

#include<stdio.h>
#include<math.h>
int main()
{
 char ch;
 printf("Enter character");
 scanf("%c",&ch);
 if(isdigit(ch))
   printf("Chracter is digit");
 else
   printf("character is not digit");
  
}

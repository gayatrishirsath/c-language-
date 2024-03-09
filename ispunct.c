#include<stdio.h>
#include<math.h>
int main()
{
 char ch;
 printf("Enter character");
 scanf("%c",&ch);
 if(ispunct(ch))
   printf("Chracter is puncatuation");
 else
   printf("character is not puncatuation");
  
}

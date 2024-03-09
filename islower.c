#include<stdio.h>
#include<math.h>
int main()
{
 char ch;
 printf("Enter character");
 scanf("%c",&ch);
 if(islower(ch))
   printf("Chracter is lowercase");
 else
   printf("character is not lowercase");
  
}

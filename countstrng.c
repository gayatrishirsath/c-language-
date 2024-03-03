#include<stdio.h>
#include<string.h>
int main()
{ char s1[100],ch;
  int i,c1=0,c2=0;
  printf("Enter string=");
  gets(s1);
  printf("Enter character=");
  scanf("%c",&ch);
  for(i=0;s1[i]!='\0';i++)
  {
  	if(ch<=s1[i])
  	  c1++;
  	else
  	   c2++;
  }
   printf("Smaller string=%d",c1);
   printf("\n grater string=%d",c2); 
}

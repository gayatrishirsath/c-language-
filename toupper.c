#include<stdio.h>
#include<ctype.h>
int main()
{
  char s1[100];
  int i;
  printf("Enter string=");
  scanf("%s",&s1);
  for(i=0;s1[i]!='\0';i++)
  if(islower(s1))
    {
	 s1[i]=toupper(s1[i]);
    }
   printf(" string=%s",s1);
}

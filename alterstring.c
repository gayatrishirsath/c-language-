#include<stdio.h>
#include<string.h>
int main()
{ char s1[100];
  int i;
  printf("Enter string=");
  gets(s1);
  for(i=0;s1[i]!='\0';i++)
  {
   if(s1[i]>='A'&&s1[i]<='Z')
      s1[i]=s1[i]+32;
   else if(s1[i]>='a'&&s1[i]<='z')
      s1[i]=s1[i]-32;
   else if(s1[i]>='0'&&s1[i]<='9')
      s1[i]='?';
   else if(s1[i]>=' ')
      s1[i]='*';
   }
   printf("\n string=%s",s1);
}

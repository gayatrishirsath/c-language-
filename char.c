#include<stdio.h>
int main()
{int i,n;
char ch;
 printf("Enter character");
 scanf("%c",&ch);
 printf("Enter limit");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	 printf("%c   ",ch++);
 }
 
}


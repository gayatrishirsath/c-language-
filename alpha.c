#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character=");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
	   printf("Character is alphabate");
	else
    	printf("Character not is alphabate");
}

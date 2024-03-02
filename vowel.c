#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character=");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	   printf("Character is vowel or constant");
	else
    	printf("Character is not vowel or constant");
}

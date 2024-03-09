#include<stdio.h>
int main()
{    float cp,sp;
	printf("Enter cost price=");
	scanf("%f",&cp);
	printf("Enter selling price=");
	scanf("%f",&sp);
	if(sp>cp)
	   printf("profit");
	else 
    	printf("loss");
}

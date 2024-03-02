#include<stdio.h>
int main()
{
	int n,d,s=0,n1;
	printf("Enter number=");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{	
	  d=n%10;
	  s=s+(d*d*d);
	  n=n/10;
    }
    if(s==n1)
      printf("Num is armstrong");
    else
    printf("Num is not  armstrong");
}

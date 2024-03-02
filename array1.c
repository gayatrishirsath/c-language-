#include<stdio.h>
int main()
{int a[100],i,n,s=0;
 printf("Enter limit");
 scanf("%d",&n);
 printf("Enter n numbers");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\nsum of odd numbers=");
 for(i=0;i<n;i++)
 {	if(a[i]%2==1)
    s=s+a[i];
}
 	printf("\n%d",s);
}

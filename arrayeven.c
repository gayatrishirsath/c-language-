#include<stdio.h>
int main()
{
 int a[50],i,n;
 printf("enter limit");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++);
 {
  scanf("%d",&a[i]);
 }
 printf("Even numbers=");
 for(i=0;i<n;i++)
 {
 if(a[i]%2==0)
 printf("\n%d",a[i]);	
 }
}

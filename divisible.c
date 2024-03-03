#include<stdio.h>
 int main()
 { 
  int n;
  printf("Enter number"); 
  scanf("%d",&n);
  if(n%5==0&&n%11==0)
   printf("Number is divisible by 5 and 11");
  else
   printf("number is not divisible by 5 and 11\");
}

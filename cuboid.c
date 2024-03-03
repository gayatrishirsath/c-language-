#include<stdio.h>
 int main()
 {
  int l,b,h,s;
  printf("Enter length");
  scanf("%d",&l);
  printf("Enter breath");
  scanf("%d",&b);
  printf("Enter height");
  scanf("%d",&h);
  s=2*(l*b+l*h+b*h);
  printf("surface area of cuboid=%d",s);
}

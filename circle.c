#include<stdio.h>
int main()
{ float r;
 void circle(float r);
 printf("Enter radius");
 scanf("%f",&r);
 circle(r);
}
 void circle(float r)
{
 float a=3.14*r*r;
 printf("\n Area of circle=%f",a);
}

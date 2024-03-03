#include<stdio.h>
int main()
{int s1,s2,s3,s4,s5,t;
  float p;
	printf("Enter marks of physics,chem,bio,math,comp=");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	t=s1+s2+s3+s4+s5;
	p=t/5;
	printf("per=%f\n",p);
	if(p>=90)
	   printf("GRADE A");
	else if(p>=80)
    	printf("GRADE B");
   	else if(p>=70)
    	printf("GRADE C");
   	else if(p>=60)
    	printf("GRADE D");
   	else if(p>=40)
    	printf("GRADE E");
    else if(p<40)
    	printf("GRADE F");
    else
        printf("FAIL....!");
}

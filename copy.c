#include<stdio.h>
int main()
{ int a[10][10],b[10][10],i,j,r,c;
  printf("Enter how many rows and columns");
  scanf("%d%d",&r,&c);
  printf("Enter matrix");
  for(i=0;i<r;i++)
  {for(j=0;j<c;j++)
   { scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<c;i++)
  {for(j=0;j<r;j++)
    {
	 b[i][j]=a[j][i];
    }
  }
  printf("\nDisplay coppied matrix\n");
  for(i=0;i<c;i++)
  {for(j=0;j<r;j++)
  {printf("%d\t",b[i][j]);
  }
  printf("\n");
  }
}

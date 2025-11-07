//(Subtraction of 2D Array) Difference between two matrices.
#include <stdio.h>
int main()
{
int a1[10][10],a2[10][10],a3[10][10],m,n,i,j;
printf("Enter number of row and column:\n");
scanf("%d%d",&m,&n);
printf("Enter %d number of first array elements\n",m*n );
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
scanf("%d",&a1[i][j]);
}
}

printf("Enter %d number of second array elements\n",m*n );
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
scanf("%d",&a2[i][j]);
}
}

printf("The new array holding the difference of two array elements is \n" );

for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
a3[i][j]=a1[i][j] - a2[i][j];
printf("%d \t",a3[i][j]);
}

printf("\n");
}

return 0;
}

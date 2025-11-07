//Diaginals of a matrix

#include <stdio.h>
int main()
{
int a1[10][10],m,n,i,j;
printf("Enter number of rows and columns of a matrix:\n");
scanf("%d%d",&m,&n);
printf("Enter %d number of the matrix elements\n",m*n );
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
scanf("%d",&a1[i][j]);
}
}

printf("The left diagonal elements of the matrix is : \n\n" );
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
if(i == j)
{
printf("%d \t",a1[i][j]);
}
else
{
printf("*\t");
}
}

printf("\n");
}

printf("The right diagonal elements of the matrix is : \n\n" );
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i+j==m - 1)
{
printf("%d \t",a1[i][j]);
}
else
{
printf("*\t");
}
}

printf("\n");
}
printf("The both the diagonal elements of the matrix is :\n \n" );
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if((i == j)||(i+j==m - 1))
{
printf("%d \t",a1[i][j]);
}
else

{
printf("*\t");
}
}

printf("\n");
}
return 0;
}

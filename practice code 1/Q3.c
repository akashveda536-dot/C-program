#include<stdio.h>
int main()
{
int i,j;
int y[i][j];
int c,z,e,f,n,m;
printf("Enter the row for matrix1:");
scanf("%d",&c);
printf("Enter the column for matrix1:");
scanf("%d",&z);
int a[c][z];
printf("Enter the matrix1:\n");
for(int i=0;i<c;i++)
{
for(int j=0;j<z;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the row for matrix2:");
scanf("%d",&e);
printf("Enter the column for matrix2:");
scanf("%d",&f);
int b[e][f];
printf("Enter the matrix2:\n");
for(int k=0;k<e;k++)
{
for(int l=0;l<f;l++)
{
scanf("%d",&b[k][l]);
}
}
printf("MATRIX 1\n");
for(int i=0;i<c;i++)
{
for(int j=0;j<z;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("MATRIX 2\n");
for(int k=0;k<e;k++)
{
for(int l=0;l<f;l++)
{
printf("%d\t",b[k][l]);
}
printf("\n");
}
printf("MULTIPLIED ARRAY");
for(int i=0;i<e;i++)
{
for(int j=0;j<f;j++)
{
y[i][j]=0;
for(int k=0;k<e;k++)
{
y[i][j]=y[i][j]+a[i][k]*b[k][j];
}
}
printf("\n");
}
for(int i=0;i<e;i++)
{
for(int j=0;j<f;j++)
{
printf("%d\t",y[i][j]);
}
printf("\n");
}
return 0;
}

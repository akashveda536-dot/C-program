#include<stdio.h>
int main()
{
    int c,z,e,f;
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
    printf("ADDITIONED MATRIX\n");
    for(int u=0;u<c;u++)
    {
        for(int v=0;v<z;v++)
        {
            printf("%d\t",a[u][v]-b[u][v]);
        }
        printf("\n");
    }
    return 0;
}

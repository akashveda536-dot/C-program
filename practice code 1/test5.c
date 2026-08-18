#include <stdio.h>
void decimalToBinary(int n,int bits[],int *size)
{
    *size=0;
    while(n>0)
    {
        bits[*size]=n%2;
        n=n/2;
        (*size)++;
    }
}
void printBinary(int bits[],int size)
{
    int i;
    int paddedSize;
    paddedSize=((size+3)/4)*4;
    printf("Binary:");
    for(i=paddedSize-1;i>=size;i--)
    {
        printf("0");
        if(i%4==0&&i!=0)
            printf(" ");
    }
    for(i=size-1;i>=0;i--)
    {
        printf("%d",bits[i]);
        if(i%4==0&&i!=0)
            printf(" ");
    }
    printf("\n");
}
int highestSetBit(int n)
{
    int position=0;
    while(n>1)
    {
        n=n>>1;
        position++;
    }
    return position;
}
int main()
{
    int n;
    int bits[16];
    int size;
    int setBits=0;
    int i;
    int highest;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    decimalToBinary(n,bits,&size);
    printBinary(bits,size);
    for(i=0;i<size;i++)
    {
        if(bits[i]==1)
        {
            setBits++;
        }
    }
    highest=highestSetBit(n);
    printf("Bits used:%d\n",size);
    printf("Set bits (1s):%d\n",setBits);
    printf("Highest bit:Position%d\n",highest);
    return 0;
}

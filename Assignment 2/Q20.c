#include<stdio.h>
int num=10;
void modify()
{
    num=20;
}
int main()
{
    printf("Before function call = %d\n",num);
    modify();
    printf("After function call = %d\n",num);
    return 0;
}

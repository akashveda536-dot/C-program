#include <stdio.h>
int validateInputs(int fan,int led,int alarm)
{
    if(fan<0 || fan>3)
        return 0;
    if(led<0 || led>3)
        return 0;
    if(alarm<0 || alarm>1)
        return 0;
    return 1;
}
unsigned char packRegister(int fan,int led,int alarm)
{
    unsigned char reg=0;
    reg=reg | fan;
    reg=reg | (led<<2);
    reg=reg | (alarm<<4);
    return reg;
}
void unpackRegister(unsigned char reg,int *fan,int *led,int *alarm)
{
    *fan=reg & 0x03;
    *led=(reg>>2) & 0x03;
    *alarm=(reg>>4) & 0x01;
}
void printBinary(unsigned char reg)
{
    int i;
    for(i=7;i>=0;i--)
    {
        printf("%d ",(reg>>i)&1);
    }
}
int main()
{
    int fan,led,alarm;
    int uf,ul,ua;
    unsigned char reg;
    printf("Enter fan(0-3),led(0-3),alarm(0-1): ");
    scanf("%d %d %d",&fan,&led,&alarm);
    if(!validateInputs(fan,led,alarm))
    {
        printf("Validation:FAILED\n");
        return 0;
    }
    printf("Validation:PASSED\n");
    reg=packRegister(fan,led,alarm);
    printf("Packed: 0x%02X\n",reg);
    printf("Binary: ");
    printBinary(reg);
    printf("\n");
    unpackRegister(reg,&uf,&ul,&ua);
    if(uf==fan && ul==led && ua==alarm)
        printf("VERIFY:OK\n");
    else
        printf("VERIFY:FAIL\n");
    return 0;
}

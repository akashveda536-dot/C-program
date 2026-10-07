#include <reg51.h>
sbit button = P3^3;
void delay();
void main()
{
    unsigned char count = 0;
    button = 1;
    P1 = 0xFF;
    while(1)
    {
        if(button==0)
        {
            delay();
            if(button==0)
            {
                count++;
                if(count>15)
                {
                    count=0;
                }
                P1=count;
                while(button==0);
            }
        }
    }
}
void delay()
{
    int i,j;
    for(i=0;i<20;i++)
    {
        for(j=0;j<100;j++);
    }
}
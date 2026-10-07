#include<reg51.h>
sbit sw=P3^3;
void main()
{
while(1)
{
 sw=1;
 P1=0x00;
 if(sw==0)
 {
  P1=0x0FF;
 }
 else
 {
  P1=0x00;
 }
}
}


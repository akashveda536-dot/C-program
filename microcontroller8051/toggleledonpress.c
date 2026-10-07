#include<reg51.h>
sbit sw = P3^3;
sbit led = P1^0;
void main()
{
 sw=1;
 led=1;
while(1)
{
 if(sw==0)
 {
  led = !led;
  while(sw==0);
 }
}
}

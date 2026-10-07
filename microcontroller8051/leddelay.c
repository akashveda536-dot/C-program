#include<reg51.h>
void delay();
void main()
{
 P1=0x00;
 delay();
 P1=0x0FF;
 delay();
}
void delay()
{
 int i,j;
 for(i=0;i<100;i++)
 {
  for(j=0;j<200;j++);
 }
}

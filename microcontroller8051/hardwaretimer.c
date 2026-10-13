#include<reg52.h>
void timer_delay(void)
{
 T2CON = 0X00;
 RCAP2H = 0XD4;
 RCAP2L = 0X00;
 TH2 = 0XD4;
 TL2 = 0X00;
 TF2 = 0;
 TR2 = 1;
 while(TF2==0);
 TF2 = 0;
 TR2 = 0;
 }
 void main()
 {
  while(1);
  {
   P1=0x0AA;
   timer_delay();
   P1=0x55;
   timer_delay();
  }
 }
  
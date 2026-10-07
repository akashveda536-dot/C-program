#include<reg51.h>
void delay();
void main()
{
 while(1)
 {
 P1=0x0AA;
 delay();
 P1=0x55;
 delay();
}
} 
void delay()
{
 int i,j;
 for(i=0;i<100;i++)
 {
  for(j=0;j<200;j++);
 }
}


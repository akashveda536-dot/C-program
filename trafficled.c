#include<reg51.h>
void delay();
sbit red = P1^0;
sbit yellow = P1^1;
sbit green = P1^2;
void delay()
{
 int i,j;
 for(i=0;i<200;i++)
 {
  for(j=0;j<100;j++);
 }
} 
void main()
{
 while(1)
 {
 red = 0;
 yellow = 1;
 green = 1;
 delay();
 red = 1;
 yellow = 0;
 green = 1;
 delay();
 red = 1;
 yellow = 1;
 green = 0;
 delay();
 }
}

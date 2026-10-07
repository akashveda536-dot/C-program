#include<reg51.h>
sbit switch_user=P1^0;
sbit led=P3^3;
void main()
{
 switch_user=1;
 led=1;
while(1)
{
 if(switch_user==0)
 {
  led=0;
 }
 else
{
 led=1;
}
}
}

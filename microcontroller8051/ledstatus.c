#include<reg51.h>
sbit RS = P3^0;
sbit RW = P3^1;
sbit EN = P3^2;
sbit sw = P3^3;
sbit led = P1^1;
void delay()
{
    int i, j;
    for(i=0;i<100;i++)
        for(j=0;j<1275;j++);
}
void lcd_cmd(unsigned char cmd)
{
    P2 = cmd;    
    RS = 0;      
    RW = 0;      
    EN = 1;       
    delay();
    EN = 0;       
}
void lcd_data(unsigned char dat)
{
    P2 = dat;     
    RS = 1;       
    RW = 0;       
    EN = 1;      
    delay();
    EN = 0;       
}
void lcd_string(char *str)
{
    while(*str)
    {
        lcd_data(*str);
        str++;
    }
}
void main()
{
    sw = 1;
    lcd_cmd(0x38); 
    lcd_cmd(0x0C); 
    lcd_cmd(0x06);
    lcd_cmd(0x01);
    if(sw==0)
    {
     led = 0;
     lcd_string("LED_ON");
    }
    else
    {
     led = 1;
     lcd_string("LED_OFF");
    }
    while(1);
}
#ifndef __LCD_H
#define __LCD_H
#define BUS P0
#define RS P1_2
#define RW P1_1
#define EN P1_0

void lcd_busy(void)
{
  char status;
  BUS=0xFF;
  RS=0;
  RW=1;
  EN=1;
  EN=0;
  status=(BUS&0x80);
  while(status!=0)
  {
   EN=1;
   EN=0;
   status=(BUS&0x80);
  }
  
}
void lcd_cmd(char c)
{
  BUS=c;
  RS=0;
  RW=0;
  EN=1;
  EN=0;
  lcd_busy();
}
void lcd_data(char c)
{
  BUS=c;
  RS=1;
  RW=0;
  EN=1;
  EN=0;
  lcd_busy();
}
void lcd_display(char*p)                                                                
{
  while(*p!='\0')
  {
    lcd_data(*p);
    *p++;
  }
}

#endif


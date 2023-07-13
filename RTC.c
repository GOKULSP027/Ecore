#include <AT89S52.h>  /* Header File */
#define SCL P0_3   /* port 0.3 configure as SCL */
#define SDA P1_5   /* port 1.5 configure as SDA */
void i2c_init() /* initial all zero */
{
  SCL=0;   /* initial LOW the CLOCK */
  SDA=0;   /* initial LOW the DATA*/
}
void i2c_start()  /*start function */
{
  SDA=1;	/*HIGH the DATA*/
  SCL=1;
  SDA=0;	/*LOW the DATA*/
  SCL=0;	/*LOW the clock*/
}
void i2c_stop()  /* stop function */
{
  SCL=1;
  SDA=1;	/*HIGH the DATA*/
  SCL=0;	/*LOW the clock*/
  SDA=0;	/*LOW the DATA*/
}
void i2c_ack()  /* Acknowledgement*/
{
  SDA=0;	/*LOW the DATA*/
  SCL=1;	/*HIGH the clock*/
  SCL=0;	/*LOW the clock*/
}
void i2c_nack()  /* not Acknowledgement*/
{
  SDA=1;	/*HIGH the DATA*/
  SCL=1;
  SCL=0;	/*LOW the clock*/
  SDA=0;	
}
void i2c_write(char b)  /* Write function */
{
  char i;
  __bit v=1;
  while(1)
  {
 for(i=0;i<8;i++)
 {
  if((b&(0x80>>i))!=0)
  {
    SDA=1;
  }
  else
  {
    SDA=0;
  }
  SCL=1;
  SCL=0;
 }
 SDA=1;
 SCL=1;
 v=SDA;
 SCL=0;
 SDA=0;
 }
}
char i2c_read() /* read function */
{
 char a=0x00; 
  char j;
 SDA=1;
 for(j=0;j<8;j++)
 {
  SCL=1;
  if(SDA==1) 
  {
    a=a|(0x80>>j);
  }
  else
  {
  }
  SCL=0;
 }
 SDA=0;
 return a;
}
void main()
{
  i2c_init();
  i2c_start();
  i2c_write(0xD0);
  i2c_write(0x00);
  i2c_write(0x00);
  i2c_stop();
  while(1)
  {
    i2c_start();
    i2c_write(0xD0);
    i2c_write(0x00);
    i2c_start();
    i2c_write(0xD1);
    P2=~(i2c_read());
    i2c_ack();
    i2c_stop();
  }
}




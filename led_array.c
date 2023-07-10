#include <AT89S52.h>

void wait(int);

const char data[4]={0x81,0x42,0x24,0x18};

void main()
{
 char i;
while(1)
{
  for(i=0;i<4;i++)
  {
   P0=~data[i];
   wait(1);
}
 }
}


void wait(int del)  /* this program generate delay in multiples of 100us */
{
 int c1,c2;  /* Inner and outer loop Count variables */
 for(c1=0; c1<del; c1++)	/* Outer loop runs for "del" times */
 {
  for(c2=0; c2<50; c2++)  /* Inner loop runs for 15 times */
  {
  }
 }
}
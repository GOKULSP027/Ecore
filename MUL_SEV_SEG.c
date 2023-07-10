#include <AT89s52.h>	/* including a heder file */
#define DATA P0		/* to configure a port 0 into a data */
#define DIG P1              /* to configure a port1 into digit */
#define BLANK 0x0F         /* macro function to write the display blank */
const  char code[11]={0xFF,0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90}; /* off,0 to 9 */
void wait(int);       /*delay function call */
void main()
{
  int k;   /* intilaize a variable for loop */
  while(1)
  {
    for(k=0;k<11;k++) /* loop for displaing all element in an array */
    {
     DATA=code[k];
     DIG=~(0x08);   /* to write which display to be select */
     wait(1);       /* delay function */
     DIG=BLANK;   /* to empty the display */
    }
  }
}
void wait(int del)  /* this program generate delay in multiples of 100us */
{
  int c1,c2;  /* Inner and outer loop Count variables */
  for(c1=0; c1<del; c1++)	/* Outer loop runs for "del" times */
  {
   for(c2=0; c2<50; c2++);  /* Inner loop runs for 15 times */
  }
}

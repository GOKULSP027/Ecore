#include <AT89s52.h>
#define SW P0 /* port zero assign as switch */
#define LED P1 /* port one  assign as led */
void wait(int);
void main()
{
SW=0xFF;       /* assign a switch as logic high */
while(1)
{
LED=SW; /* write a switch in led */
wait(1);
LED=0xFF;   
wait(1);  
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
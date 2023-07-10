#include <AT89s52.h>
#define SEV_SEG P0
void wait(int);
void main()
{
  SEV_SEG=0xFF;
  while(1)
  {
    SEV_SEG=(0xC0);	/* */
    wait(5);
    SEV_SEG=(0xF9);	/* */
    wait(5);
    SEV_SEG=(0xA4);	/* */
    wait(5);
    SEV_SEG=(0xB0);	/* */
    wait(5);
    SEV_SEG=(0x99);	/* */
    wait(5);
    SEV_SEG=(0x92);	/* */
    wait(5);
    SEV_SEG=(0x82);	/* */
    wait(5);
    SEV_SEG=(0xF8);	/* */
    wait(5);
    SEV_SEG=(0x80);	/* */
    wait(5);
    SEV_SEG=(0x90);	/* */
    wait(5);

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
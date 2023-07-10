#include <AT89s52.h>
#define SEV_SEG P0
void wait(int);
void main()
{
  int arr[11]={0xFF,0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
    int k;
  while(1)
  {
for(k=0;k<11;k++)
{
P0=arr[k];
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

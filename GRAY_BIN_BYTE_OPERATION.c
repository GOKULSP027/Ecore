#include <AT89S52.h>
const char input[9]={0xE0,0xC0,0xA0,0x80,0x60,0x40,0x20,0x00}; /* input comination of three switches */
const char output[9]={0xE7,0xE6,0xE4,0xE5,0xE0,0xE1,0xE3,0xE2}; /* output comination of three LEDs */

void main()
{
 char status,i;
 P0=0xE7;
 while(1)
 {
  status=P0&0xE0;
  for(i=0;i<8;i++)  /*for loop for an array */
  {
   if(status==input[i])/* condition check */
   {
    P0=output[i];
    break; /*Break the loop */
   }
   else
   {
   }
  }
 }
}
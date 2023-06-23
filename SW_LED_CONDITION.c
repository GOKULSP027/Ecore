#include <AT89s52.h>
#define SW P0 /* port zero assign as switch */
#define LED P1_5 /* port one  assign as led */
#define ON 0
#define OFF 1
void main()
{
char s; 
SW=0xFF;      /* assign a switch as logic high */

while(1)
{
s=SW;
if(s==0xAA)
{
LED=ON;
}
else
{
LED=OFF;
}
}
}

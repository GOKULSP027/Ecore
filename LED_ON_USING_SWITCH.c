#include<AT89s52.h>
#define ON 0    /* macro funcion for LED ON Logic set 0 */
#define OFF 1   /* macro funcion for LED OFF Logic set 1 */
#define LED P2_0 /* macro function for seting a port pin for LED */
#define SW P3_0  /* macro function for seting a port pin for switch */
#define INPUT 1
void main()
{
  __bit status; /* initialize a bit variable */
  LED =OFF;     /* Turn OFF LED */
  SW=INPUT;     /* configure port pin connected to switch as input */
  while(1)      /*super loop*/
  {
    status=!SW;  /* read the switch and store the logic to a variable */
    LED=status;  /* write the logic to the LED */
  }
}
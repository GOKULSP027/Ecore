#include<AT89s52.h>
#define ON 0    /* macro funcion for LED ON Logic set 0 */
#define OFF 1   /* macro funcion for LED OFF Logic set 1 */
#define LED P0_1 /* macro function for seting a port pin for LED */
#define SW P2_0  /* macro function for seting a port pin for switch */
#define INPUT 1
void wait(int);  /* fuction call */
void main()
{
  __bit status; /* initialize a bit variable */
  LED =OFF;     /* Turn OFF LED */
  SW=INPUT;     /* configure port pin connected to switch as input */
  
  while(1)      /*super loop*/
  {
    status=SW;  /* read the switch and store the logic to a variable */
    if(LED!=status)  /* write the logic to the LED */
    {
    LED=ON;
    wait(1);
    LED=OFF;
    wait(1);
    }
  }
}
void wait(int del)
{
int i,j; /* inisialization of variable */
for(i=0;i<del;i++)
{
for(j=0;j<15;j++);
}
}
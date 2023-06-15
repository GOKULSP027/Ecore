#include<AT89s52.h>
#define ON 0    /* macro funcion for LED ON Logic set 0 */
#define OFF 1   /* macro funcion for LED OFF Logic set 1 */
#define LED1 P1_0 /* macro function for seting a port pin for LED */
#define LED2 P1_1 /* macro function for seting a port pin for LED */
void wait(int);
void main()
{
LED1=OFF;
LED2=OFF;
while(1)
{
LED1=ON;
LED2=OFF;
wait(1);
LED1=OFF;
LED2=ON;
wait(1);
}
}
void wait(int del)
{
int i,j;   /* inisialization of variable */
for(i=0;i<del;i++)
{
for(j=0;j<15;j++);
}
}
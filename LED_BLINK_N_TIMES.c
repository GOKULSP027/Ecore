#include<AT89s52.h>
#define ON 0    /* macro funcion for LED ON Logic set 0 */
#define OFF 1   /* macro funcion for LED OFF Logic set 1 */
#define LED P1_0 /* macro function for seting a port pin for LED */

void wait(int);

void main()
{
int k;
LED =OFF;  
for(k=1;k<=10;k++)
{
LED=OFF;
wait(1);
LED=ON;
wait(1);
}
while(1)
{
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
#include <AT89s8252.h>
void delay(int)
void main()
{
while(1)
{
 P2_0=0;
 delay();
 P2_0=1;
 delay();
}
}
void delay(void)
{
int i;
for(i=0;i<100;i++)
{
}
}
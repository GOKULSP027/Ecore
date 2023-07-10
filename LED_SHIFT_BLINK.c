#include<AT89s52.h>
void wait(int);
void main()
{
char data=0X00;
int k;
while(1)
{
for(k=0;k<8;k++);
P0=k<<1;
wait(1);
}
}
void wait(int)
{
int i,j;
for(i=0;i<100;i++)
{
for(j=0;j<1000;j++);
}
}

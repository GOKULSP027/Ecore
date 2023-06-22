#include<AT89s52.h>
void wait(int del);
void main()
{
char data=0x01;
int k;
while(1)
{
/* P0=~0x01;
wait(2);
P0=~0x02;
wait(2);
P0=~0x04;
wait(2);
P0=~0x08;
wait(2);
P0=~0x10;
wait(2);
P0=~0x20;
wait(2);
P0=~0x40;
wait(2);
P0=~0x80;
wait(2); */
for(k=0;k<8;k++)
{
P0=~(data<<k);
wait(1);
}
}
}
void wait(int del)
{
int i,j;
for(i=0;i<del;i++)
{
for(j=0;j<15;j++);
}
}

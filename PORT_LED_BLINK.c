#include<AT89s52.h>
void wait(int);
void main()
{
char data=0XAA;
while(1)
{
P0=data;
wait(1);
P0=data<<1;
wait(1);

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
#include<AT89s52.h> /* Header File */
void wait(int);
void main()
{
P2_0=1;
while(1)
{
P2_0=0; /*led ON */
wait(1);
P2_0=1;  /*led OFF */
wait(1);

}
}
/*Delay program */
void wait(int del)
{
int i,j; /* inisialization of variable */
for(i=0;i<del;i++)
{
for(j=0;j<15;j++);
}
}
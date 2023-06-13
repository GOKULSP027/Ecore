#include<AT89s52.h> /* Header File */
#define LED P3_1   /* Macro define */
void wait(int);  /* fuction call */
void main()
{
LED=1;
while(1)
{
LED=0; /*led ON */
wait(1);
LED=1;  /*led OFF */
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
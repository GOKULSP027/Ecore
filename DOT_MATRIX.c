#include<AT89s52.h>
#define ROW P0 
#define COL P1
const char pattern[9]={0xC1,0xBF,0xBF,0xB1,0xBD,0xBD,0xBD,0xC3} ;

void main()
{ 
  while(1)
  {
    char i;
    for(i=0;i<8;i++)
    {
      COL=pattern[i];
      ROW=0x01<<i;
      ROW=0x00;
    }
    
  }
}
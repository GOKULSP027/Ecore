#include<AT89s52.h>
#define ROW P0 
#define COL P1
const char pattern[9]={0xC1,0xBF,0xBF,0xB1,0xBD,0xBD,0xBD,0xC3} ; /* pattern  "G "*/

void main()
{ 
  while(1)   /*super loop*/
  {
    char i;
    for(i=0;i<8;i++) /* for loop for run 8 time */
    {
      COL=pattern[i]; /*to print in a col */
      ROW=0x01<<i;   /*left shit the values*/
      ROW=0x00;      /*to go to initialize position*/
    }
    
  }
}

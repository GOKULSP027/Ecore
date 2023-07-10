/*B2=G2 B1=B2 XOR G1 B0=B1 XOR G0; */
#include <AT89s52.h>
#define G2 P0_7
#define G1 P0_6
#define G0 P0_5
#define B2 P0_2
#define B1 P0_1
#define B0 P0_0

void main()
{
  __bit g0;
  __bit g1;
  __bit g2;
  G0=1;
  G1=1;
  G2=1;
  

  while(1)
  {
    g0=!G0;
    g1=!G1;
    g2=!G2;
    
   /* if(G1!=B2)
    {
      B1=1;
    }
    else 
    B1=0; */
    B2=!g2;
    B1= !(g2^g1);
    B0=!((g2^g2)^g0);
    	
  }
}
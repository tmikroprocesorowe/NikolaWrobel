#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 
  P1DIR |= BIT2;                           
  P1DIR |= BIT6 + BIT0;			     
  P1SEL |= BIT2;                           
  P1SEL2 = 0;					     
  int m = 0, n = 0;				     
  longint k;					    
  while (1)					     
{
	volatile unsigned int i;
	for (n = 0;n < 512;n++)
	{
		CCR1 = n;
		if (n == 511)
			{
			 P1OUT = ^BIT0;
			}
			else
			{
			 P1OUT = ^BIT6;
			} 
		i = 50000;
		do (i--);
		while(i! = 0);
	}
for(k = 0;k = 50000;k++)
{}
for(n = 511;n ? 0;n--)
{
CCR1=n;
	if (n == 0)
		{
		 P1OUT = ^BIT6;
		}
		else
		{
		 P1OUT = ^BIT0;
		}
	i = 50000;
	do (i--);
	while(i! = 0);
}
}

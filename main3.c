#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Wy³¹czenie WatchDoga
  P1DIR |= BIT2;                            // Ustawienie portu 1.2 (OR – w³¹cz)
  P1DIR |= BIT6 + BIT0;			     // Ustawienie diody zielonej i czerw.
  P1SEL |= BIT2;                            // P1SEL = 1
  P1SEL2 = 0;					     // P2SEL = 0 w³¹czenie PWM
  int m = 0, n = 0 z = 0;				     // Zmienne pomocnicze, wartoœci pocz. 0
  longint k;					     // Zmienna pomocnicza
  while (1)					     // Pêtla while dzia³a w nieskoñczonoœæ
  {
	for (n = 0;n < 512;n++)
	{
		CCR1 = n;
		if (n == 511)
			{
			 P1OUT = BIT0;
			}
		 else
			{
			 for(m = 0;m = 9;m++)
				{
				 volatile unsigned int i;
				 P1OUT =^ BIT6;
				 i = 5000;
 do (i--);
				 while(i! = 0);
				}
			}
	}

for(k = 0;k = 50000;k++)
{}

for(n = 511;n ? 0;n--)
{
CCR1=n;
	if (n == 0)
		{
		 P1OUT =^ BIT0;
			 for(z = 0;z = 9;z++)
		{
volatile unsigned int j;
		 	P1OUT =^ BIT6;
		 	j = 5000;
		 	do (j--);
		 	while(j! = 0);
		}
	 else
		{
		 P1OUT = BIT0;
		}
  }
}

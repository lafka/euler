/**
 * If we list all the natural numbers below 10 that are multiples of 
 * 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */

#include <stdio.h>

main()
{
	int index, legrandtotal;
	
	legrandtotal = 0;

	for ( index = 0; index < 1000; index++ )
	{
		if ( (0 == index % 3) || (0 == index % 5) )
		{
			printf( "%d ", index );
			legrandtotal += index;
		}
	}

	printf( "\r\n\r\nLe grand total is %d\r\n", legrandtotal);
}

#include <stdio.h>

main()
{
	int index;
	int legrandtotal;
	
	legrandtotal = 0;

	for ( index = 0; index <= 1000; index++ )
	{
		if ( (0 == index % 3) || (0 == index % 5) )
		{
			printf( "%d ", index );
			legrandtotal += index;
		}
	}

	printf( "\r\n\r\nLe grand total is %d\r\n", legrandtotal);
}

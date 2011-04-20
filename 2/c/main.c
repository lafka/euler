#include <stdio.h>

main()
{
	int index, prev, prev2;
	int total;

	prev2 = 0;
	prev  = 0;
	total = 0;

	for ( index = 0; index < 4000000; prev2 = prev, prev = index, index = prev+prev2 )
	{	
		if ( index < 2 )
		{
			index++;
		}

		if ( 0 == ( index % 2) ) 
		{
			total += index;
			printf( "%d, ", index );
		}
	}

	printf("\r\nAnd the winner is : %d\r\n", total);
}

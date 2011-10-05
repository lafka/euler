/**
 * If we list all the natural numbers below 10 that are multiples of 
 * 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

val x = (1 to 999).filter { case i: Int => if ( i % 3 == 0 || i % 5 == 0  ) true else false}.foldLeft(0)( _ + _ ) 

println( "The anser you are looking for is %d", x );

/**
 * If we list all the natural numbers below 10 that are multiples of
 * 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
#include <iostream>

using namespace std;

int main ()
{
    int total = 0;

    for ( int i = 0; i < 1000; i++ )
    {
        if ( ! (i % 5) || ! (i % 3) )
        {
            total += i;
        }
    }
    
    cout << "Total: " << total << endl;

    return 0;
}


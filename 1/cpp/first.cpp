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


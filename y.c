#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
int main(int argc, char *argv[])
{
    float x, y, ans;
    float rand_x, rand_y;
    int i, tally = 0, throws = 1000000;
     
    srand( time( NULL ));
     
    for ( i = 0; i < throws; i++ )
    {
        rand_x = ( ( rand() % 2001 ) / 1000.0) - 1.0;
        rand_y = ( ( rand() % 1001 ) / 1000.0);
         
        y = -( rand_x * rand_x ) + 1;        //this is the equation of the line, -(x^2) + 1 in this case
         
        if ( rand_y <= y )
        {
             tally++;
        }
         
    }
     
    ans = ( (float) tally / (float) throws ) * 2.0;
     
    printf("%d\n", (int)(100*ans));
     
     
    return 0;
}

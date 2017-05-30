#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAXITER 10000000

int main(int argc, char* argv)
{
   double x,y;
   int i,count=0;
   double z;
   double value;

   srand(time(NULL));
   count=0;
   for ( i=0; i<MAXITER; i++) {
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      z = x*x+y*y;
      if (z<=1) count++;
      }
   value=(double)count/MAXITER*4;
   printf("%d\n",(int)(value*100*2));

   return 0;
}

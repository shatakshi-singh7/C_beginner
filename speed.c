#include <stdio.h>
int main()
{
   int dist,time,speed;

   printf("\nEnter Distance:");
   scanf("%d", &dist);
   printf("\nEnter Time:");
   scanf("%d", &time);

   //calculating speed
   speed= dist/time;

   printf("Your speed should be %d", speed);

   return 0;
   }

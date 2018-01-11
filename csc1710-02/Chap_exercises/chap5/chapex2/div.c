#include<stdio.h>
int main (void)
{

   int odd, even, n, x;

   fprintf (stdout, "Please enter the 1st value: \n");
      fscanf (stdin, "%d", &n);
   fprintf (stdout, "Please enter the 2nd value: \n");
      fscanf (stdin, "%d", &x);

   even = n+x/2;
   if (even % 2) {
      fprintf (stdout, "These two values cannot be evenly divisible by 2\n");
   }
   else if (even != 2) {
      fprintf (stdout, "These two values can be evenly divisible by 2\n");
   } else {
      fprintf (stdout, "Error, there is something wrong\n");
      }

   return 0;
}

#include<stdio.h>
int main (void)
{

   int colest;

   printf ("Please Enter Cholesterol: \n");
   scanf ("%i", &colest);

   if (colest > 239) {
      fprintf (stdout, "You have a high cholesterol\n");
   if (colest < 200) 
      fprintf (stdout, "You have a good  cholesterol\n");
   } else {
      fprintf (stdout, "You have a low cholesterol\n");
      }
   return 0;
}

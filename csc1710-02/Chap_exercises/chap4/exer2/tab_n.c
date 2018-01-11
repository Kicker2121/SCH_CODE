#include<stdio.h>
int main (void)
{

   int n, n2, i; 
   int j, triangularNumber;

   fprintf (stdout, "The value of n:\n ", n);
   fscanf (stdin, "%d", &n);

   fprintf (stdout, "The value of n2:\n ", n2);
   fscanf (stdin, "%d", &n2);
   
   fprintf (stdout, "What is the triangularNumber: \n");
   fscanf (stdin, "%d", &triangularNumber);

   for(triangularNumber = 0; triangularNumber<=50; triangularNumber+=5) {
      //triangularNumber = n*n+1/2;
      fprintf (stdout, "%d\n", triangularNumber);
   }
   fprintf (stdout, "The triangular Number is:\n|%4d|\n", triangularNumber);
   fprintf (stdout, "*-----*---------------*-----*\n");
   fprintf (stdout, "*  n  *  <--Table-->  *  n2 *\n");
   fprintf (stdout, "*-----*---------------*-----*\n");
   for(i=n; n<=10; n++) {
      n2 = n2 * 2;
      fprintf (stdout, "*%4d *               *%4d *\n", n, n2);
   }
   fprintf (stdout, "*-----*---------------*-----*");      
   return 0;
} 

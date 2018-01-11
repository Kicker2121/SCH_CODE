#include<stdio.h>
int main (void)
{

   int x, i, value, zero, valu, val2;

   fprintf (stdout, "Please enter two values: \n");
   fscanf (stdin, "%d %d", &valu, &val2);

   valu /= val2;

   fprintf (stdout, "value1 = %d and value2 = %d\n", valu, val2);
   fprintf (stdout, "The total of val / val2 =%d\n", valu);
   fprintf (stdout, "The total can be divisible by zero\n", zero);
   fprintf (stdout, "The total of val / val2 is decimal format =%7f\n", valu);
         

   return 0;
}

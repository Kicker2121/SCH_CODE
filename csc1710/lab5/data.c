#include<stdio.h>
int main (void)
{
   int i, n, value;
   int sum = 0;
   char classnames[20];
   float average = 0;

   fprintf(stdout, "Please Enter the number of Classnames:");
   fscanf(stdin, "%s", classnames);
   fprintf(stdout, "Please Enter the number of Students in the class:");
   fscanf(stdin, "%i", &n);

   for (i=0; i<n; i++){ 
      fscanf(stdin, "%i\n", &value);
      sum += value;
   }
   average = (double) sum/n;
   fprintf(stderr, "Processing class: %s\n", classnames);
   fprintf(stdout, "The Class: %s Average: %0.2f is  based on %i students\n", classnames, average, n);

   return 0;
}

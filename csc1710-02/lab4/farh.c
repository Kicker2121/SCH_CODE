/*
 * Name: Alex Sims
 * Date: September 25, 2015
 * Location: ~/csc1710-02/lab4/farh.c
 * Comment: In this program the user is prompted to imput a beggining value, ending value with an increment value that computes fahrenheit to celsius. The beggining value is the starting value and the ending value is the end value in fahrenheit. For the increment value, the user inputs a value for which they wish the beggining value gets added determined by what the user inputs to the final ending value.
 * Reference: <"www.metric-conversions.org/temperature/fahrenheit-to-celsius.htm" />
 */ 

#include <stdio.h>
int main (void)
{
   float i, j, n, s;
   double fahrenheit;
 
/* The user inputs a beggining value */
   printf ("Please Enter a beggining temperature value\nIf you dare: \n");
   scanf ("%f", &n);

/* The user inputs a ending value */
   printf ("Please Enter a ending teperature value\nIf you must: \n");
   scanf ("%f", &j);

/* The user inputs a incremented value that will be added to the beggining value */
   printf ("Please Enter a Increment value\nOnly if you want to: \n");
   scanf ("%g", &s);   

/* This is where the table is being printed out and calculated */
   printf ("\nCelsius          Fahrenheit\n\n");
   for (i = n; i <= j; i += s) {
      fahrenheit = (i-32) + (5.0/9.0) * (double) j;
      printf ("%6.2f       |       %6.2f\n", i, fahrenheit);
   }
     
   return 0;
}

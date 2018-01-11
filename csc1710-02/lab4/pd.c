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
   double kilograms;
 
/* The user inputs a beggining value */
   printf ("Please Enter a beggining pounds value\n");
   scanf ("%f", &n);

/* The user inputs a ending value */
   printf ("Please Enter a ending pounds value\n");
   scanf ("%f", &j);

/* The user inputs a incremented value that will be added to the beggining value */
   printf ("Please Enter a Increment value\n");
   scanf ("%g", &s);   

/* This is where the table is being printed out and calculated */
   printf ("\nPounds          Kilograms\n\n");
   for (i = n; i <= j; i += s) 
   {
      kilograms = (0.45359237*i);
      
      //fahrenheit = (i-32) + (5.0/9.0) * (double) j;
      printf ("%6.2f       |       %6.2f\n", i, kilograms);
   }
     
   return 0;
}
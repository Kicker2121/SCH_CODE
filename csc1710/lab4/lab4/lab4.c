/*
   Name: Alex Sims
   Date: 1-6-15
   Class: csc1710
   Location: ~/csc1710/lab4/
   Program related to a cash register calculation
*/
#include<stdio.h>
int main (void) {

   int originalPrice;
   double discountRate;
   double finalAmount;

   fprintf(stdout, "Enter the original Price: \n");
   fscanf(stdin, "%i", &originalPrice);

   fprintf(stdout, "Enter the discount rate: \n");
   fscanf(stdin, "%lf", &discountRate);
   //fprintf(stdout, "Enter the final price: ");
   //fscanf(stdin, "%lf", &finalAmount);

   discountRate = originalPrice * discountRate /100.0;
   finalAmount = originalPrice - discountRate;
   
   fprintf(stdout, "%i\n", originalPrice);
   fprintf(stdout, "%lf\n", discountRate);
   fprintf(stdout, "%lf\n", finalAmount);

   return 0;
}

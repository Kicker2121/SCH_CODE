/*
 * Name: Alex Sims
 * Class: CSC1710-02
 * Date: September 4, 2015
 * Location: ~/home/csc1710-02/ bills.c
 * Comment: This program prompts the user to input four different values, for each of the value have a different tpye of multiplicative value indicated by the dollar value, then the sum of the profits will the outputed.
 */


#include<stdio.h>

int main(void)
{
   int value1, value2, value3, value4;
   int sum, sumVal1, sumVal2, sumVal3, sumVal4;
   int h = 1, m = 5, n = 10, i = 20;

   printf("How many one dollar bills do you have:\n");
   scanf("%i", &value1);
   printf("How many ten dollar bills do you have:\n");
   scanf("%i", &value2);
   printf("How many ten dollar bills do you have:\n");
   scanf("%i", &value3);
   printf("How many twnety dollar bills do you have:\n");
   scanf("%i", &value4);
   
   sumVal1 = value1 * h;
   sumVal2 = value2 * m;
   sumVal3 = value3 * n;
   sumVal4 = value4 * i;
  
   sum = sumVal1 + sumVal2 + sumVal3 + sumVal4;
   printf ("If we add Ones:%i Fives:%i Tens:%i and Twenties:%i the result of the profits will be: %i\n", sumVal1, sumVal2, sumVal3, sumVal4, sum); 


   return 0;
}

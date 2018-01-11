/*
 * Name: Alex Sims
 * Date: March 27, 2015
 * Class: CSC1710
 * Location: #~ csc1710/lab9/
 *
 * Question 1: array a[5] = {2, 4, 6, 8, 10} and array b[5] = {-2, -4, -6, -8, -10}
 *             Inner Product: 2 * -2 + 4 * -4 + 6 * -6 + 8 * -8 + 10 * -10 = -220
 * Question 2: array a[5] = {4, 8, 12, 16, 20} reverse a[5] = {20, 16, 12, 8, 4}
 * Question 3: a. 0
 *             b. n-1
 *             c. 1
 *             d. n-2
 *             e. (2). (n/2) (no)
 *             f. n-(i + 1)
 *             g.
 *                temp = a[i];
 *                a[i] = n-(i+1);
 *                n-(i+1) = temp; 
 */
#include<stdio.h>
#include"arraylib.h"
void inner_product (int a[], int b[], int count)

{
   for(i = 0; i < count; i++) {
      product = product + a[i] * b[i];
   }
   return 0;
}

void reverse( int a[], int count) 

   for (i = 0; i < count/2; i++) { 
      product = a[i];
      a[i] = a[count-i-1];
      a[count-i-1] = product;
}

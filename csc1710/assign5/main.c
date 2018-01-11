/* Name:  Alex Sims
   Date: 4 / 9 / 15
   Class: CSC1710
   Location: ~/csc1710/assign5/prime.c
   Comment: This program is to output prime numbers given by the user from the number 2 to a number, by of which is inputed between 1 and 1000. By outputing certain pri   me numbers based on a column format of 5 prime numbers, with increased value within each row.
*/
#include<stdio.h>

#include<math.h>

#include<stdbool.h>

#include<stdlib.h>

#include"prime.c"

int main ()
{

   bool P[100];
   int i;
   int n;

   fscanf(stdin, "%d", &n);

   while (n < 1 !=  n > 1000)
   {
      fprintf(stderr, "Please input a number between 1 and 1000\n");
      //scan another n
      }
   for (i = 2; i <= n; i++)
   {
      P[i] = true;
      prime_search (P[i], n);
      fprintf(stdout, "\n");
      }
      return (0);
}


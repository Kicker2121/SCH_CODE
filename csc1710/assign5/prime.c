/*
 * Name: Alex Sims
 * Date: 4 / 9 / 15
 * Location: ~/csc1710/assign5/prime.c
 * Comment: This program is to output prime numbers given by the user from the number 2 to a number, by which is inputed between 1 and 1000. By outputing certain Prime  * Numbers based on a column format of 5 prime numbers, with increased value within each row. 
 */
#include <stdio.h>
int main (void)
{
void prime_search (bool P[], int n) 
{
   int count = 0;
   for (i = 2; i < n; i++) 
   {
      if (P[i])
      {
      remove_nonPrime(P, i, n);
      prime_print(P, i, n);
      count++;
      lines (count);
      }
   }
}
void lines (int count)
{
   if (count % 5 == 0)
      fprintf(stdout, "\n");
   }
void prime_print ( P[], int i, int n)
{
   if (P[i])
      fprintf(stdout, "%5d", i);
   }
void remove_nonPrime (bool P[], int i, int n)
{
   int j;
    
   for (j = 0; (i * j) < n; j++) 
   {
      P[i * j] = false;
   }
}
   return 0;
}
   

   

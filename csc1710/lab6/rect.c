/*
   Name: Alex Sims
   Class: CSC1710
   Date: 2 / 20 / 15
   Location: csc1710/lab6
   This is a program that reads length and width, and gives a rectangular value    with different values formatted; a collection of loops are also present in th   is program
   1. 33 
   2. 38 
   3. 1942
   4. 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
   5. d
   6. 2, 4, 8, 16, 32, 64, 128, 156
   7. c - because negatives are not > 0
*/
#include<stdio.h>

int main (void) {
   int w;
   int l;
   int i=0;
   int k=0;
   int area = 0;

   fprintf(stdout, "Enter an integer for width: \n");
   fscanf(stdin, "%d", &w);
   
   fprintf(stdout, "Enter an integer for length: \n");
   fscanf(stdin, "%d", &l);

   area = l * w;  
   fprintf(stdout, "The area of your rectangle is: \n");
   fprintf(stdout, "%5d in decimal\n", area);
   fprintf(stdout, "%5x in hexadecimal\n", area);
   fprintf(stdout, "%5o in octal\n", area);

   i=0;
   while (i< l) {
      fprintf(stdout, "*");
      i++;
   }  
      fprintf(stdout, "\n");
   k = 0;
   while (k<w-2)  { 
      fprintf(stdout, "*");
   i=0;
   while (i< l-2) {
      fprintf(stdout, " ");
      i++;
      }
      fprintf(stdout, "*\n");
      k++;
}
   i=0;
   while (i< l) {
      fprintf(stdout, "*");
      i++;
      }
      fprintf(stdout, "\n");
   return 0;
} 

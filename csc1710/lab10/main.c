/*
 * Name: Alex Sims
 * Date: 4 / 10 / 15
 * Class: CSC1710
 * Location: ~/csc1710/lab10/main.c
 * Comment: This Program contains five functions to load, dump, organize, sort, and exchange values/variables/integers within the array; 
 * the use of sorting algorithms such as unsorted and sorted array with bubble, insertion, and selection sorting processes.
 */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"header.h"
int load (int array[]);
int dump (int array[], int cnt);
 
int main(void) {
   int numArray[100]; 
   int i;
   int print_array; 

   n = load (numArray);
   print_array(numArray, n);
   exit (1);
}

   for (int i = 0; i < n; i++) 
   {
   if (numArray[cnt] == sv)
         return true;
   } else {
         return false;
}
//Pre-condition:

void load (int array[]) {  
   int array[100];
   int cnt;
   int rv;
   
   rv = fscanf(stdin, "%d", &array[cnt];
   for (cnt = 0; cnt != EOF; cnt++);
   rv = fscanf(stdin, "%d", &int array[cnt]);
   return (1);
}

void print_array (int array[], int n) {
   int i;
   for (int i = 0; i < n; i++) {
      print_array(cnt);
      fprintf(stdout, "%d\n", array[i];
   }
}
//Pre-condition:This function loads an array with a collection of integers
//returns the number of values loaded into the array.

void dump (int array[], int cnt) {
   int i = 8;
   int numberOfval;
   int array[100];
   }
   fscanf((stdin, "%7d", i) != EOF);
      while (i != EOF) {
      int array[i];
      numberOfval++;
      return array[i];
}
//Pre-Condition: This function dumps the array and the number of elements in the array
//outputs the numbers in the array into a eight column per line grid.

int organize (int array[], int cnt) {
   int i;
   int array[100];

   for (i = 0; i < cnt - 1; i++) {
   if (array[i] < array[i + 1] 
      int cnt = array[i];
      array[i] = array[i + 1];
      array[i + 1] = cnt;
   }
   return (0);
} 
//Pre-condition: This function will be passedd an integer array along with the actual number of values in the array
//returning the number of exchanges that the function performs during one pass through the array.

int sort (int array[], int cnt) {
   int i, j, k;

   for (i = 1; i <= cnt - 1; i++)
      for (j = 1; j <= cnt - 1; j++)
      if (array[j - 1] >= array[j]) {
         k = array[j - 1];
         array[j - 1] = array[j];
         array[j] = k;
   }
   return organize(array, cnt);
}
//Pre-condition: This function controls the number of passes through an array
//returning values of organize, and sorts the values.

void exchange (int *aptr, int *bptr) {
   int tmp;

   tmp = *aptr;
   *aptr = *bptr;
   *bptr = tmp;
   }
   fprintf(stdout, "%d%d\n", *aptr, *aptr);
}
//Pre-condition: This function exchanges two values
//and returns the number of exchanges that the organize functional performed during one pass through the array.




























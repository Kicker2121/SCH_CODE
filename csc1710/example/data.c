/*
   Name: Alex Sims
   Date: 2 / 13 / 15
   Class: CSC1710
   Location: ~/csc1710/lab5/data.c
   Lab5 for loops program and I/O redirection
*/
#include<stdio.h>
int main (void)
{
   int i, n;
   int sum =0;
   char classnames[20];
   float average=0;
   int value;
   fprintf(stdout, "Please Enter four number values based on class average grading: \n");
   fscanf(stdin, "%s", classnames);
   fscanf(stdin, "%i", &n);
   
   for(i=0; i<n; i++) {
      fscanf(stdin, "%i", &value);
      sum += value; 
}
	
   average = (double) sum/n;
   fprintf(stderr, "Processing class: %s\n", classnames);                  
   fprintf(stdout, "Class: %s Average: %0.2f based on %i students\n", classnames[i], average, n);
   
  return 0;
}
   

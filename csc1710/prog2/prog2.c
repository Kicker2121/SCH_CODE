/*
   Name: Alex Sims
   Date: 1-4-15
   Class: csc1710
   Location: ~/csc1710/assign1/prog2.c
   Program when user inputs time shows distance of fallen object
*/
#include<stdio.h>
int main (void) {
  
   double time = 0;
   const double acceleration = 32;

   fprintf(stdout, "Enter the value of time in seconds: \n");
   fscanf(stdin, "%lf", &time);
   
   double feetFallen = (acceleration * time * time) / 2;
 
   fprintf(stdout, "The distance of the fallen object is: %lf");
   fprintf(stdout, "%lf\n", feetFallen);

   return 0;
}

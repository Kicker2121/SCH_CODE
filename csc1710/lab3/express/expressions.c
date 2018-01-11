/*
	Name: Alex Sims
	Date: 1-30-15
	Class: csc1710
	Location of program: ~/home/students/asims/csc1710/lab3/expressions.c
*/
#include<stdio.h>

int main (void)	
{

   int v1, v2;
   int e1, e2, e3, e4;

   printf("Please Enter two Expression Values: \n");
   fscanf(stdin, "%d %d", &v1, &v2);

   e1 = v1+2*v2/3*v1;
   e2 = v1+((2*v2)/(3*v1));
   e3 = v1+(2*(v2/3))*v1;
   e4 = (v2%v1)%(v2/v1);
	
   fprintf(stdout, "v1 = %d and v2 = %d\n", v1, v2);
   fprintf(stdout, "Expression values are: \n");
   fprintf(stdout, "e1=%d e2=%d e3=%d e4=%d\n", e1, e2, e3, e4);
	

   return 0;

}

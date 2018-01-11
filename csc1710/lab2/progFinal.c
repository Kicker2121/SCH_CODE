/*
 	Name: Alex Sims
	Date: 1-23-2015
	Class: csc1710
	Location of program: /home/students/asims/csc1710/lab2
*/
#include<stdio.h>

int main(void)
{
	int value1, value2, sum;

	printf("Enter the value of value1\n");
	scanf("%i", &value1);
	printf("Enter the value of value2\n");
	scanf("%i", &value2);
	sum = value1 + value2;
	printf ("The sum of %i and %i is %i\n", value1, value2, sum); 


	return 0;
}

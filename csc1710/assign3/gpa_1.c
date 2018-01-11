/*
   Name: Alex Sims
   Date: 03 / 06 / 2015
   Class: CSC-1710
   Location: ~#csc1710/assign3
   Comment: In this assignment the calculation of students data, such as hours, grades, and quality points in order to   get the highest GPA for that students and get the Average & Highest GPA among the students present with their names. Takes the students numberofclasses tallied up through the system of getting the Average and Highest Average throughout the full body of the students GPA's and answers are given to the right 2 decimal places, input data is inserted into program and program computes the data given, calculating the the Highest GPA for each individual and the highest in the year.  

*/
#include<stdio.h>

int main (void) 
   {
   int i, rv, n, hours, numberOfclasses, count;
   char name[10], gradeVAL;
   double GPA; AVGgpa = 0, highgpa = 0, allgpa = 0;
   int finalgpa = 0, qpoints = 0, totalhours = 0, totalgrade = 0, totalpoints = 0;

   fprintf(stdout, "====================\n");
   fprintf(stdout, "      Name      GPA \n");
   fprintf(stdout, "====================\n");
   fprintf(stdout, "rv != EOF");
   rv = fscanf(stdin, "%s %d", name, n);

   while (rv !=EOF) {
      fprintf(stdout, "%d", &numberOfclasses);
}
   for (numberOfclasses = 0; numberOfclasses >= 10; numberOfclasses++) {
      fscanf(stdin, "%i", &numberOfclasses);
      totalhours += totalqpoints;
      fscanf(stdin, "%d", &gradeVAL);
}
   switch (gradeVAL) {
      case 'A' : gradeVAL = 4;
      break;
      case 'B' : gradeVAL = 3;
      break;
      case 'C' : gradeVAL = 2;
      break;
      case 'D' : gradeVAL = 1;
      break;
      case 'F' : gradeVAL = 0;
      break;
}

   totalgrade = gradeVAL * qpoints;
   qpoints += totalgrade;
      i++;
   GPA(double) = hours/totalqpoints;
   if(GPA > highgpa){ 
   GPA = highgpa; 
   allgpa += GPA;
   count++;

   fprintf(stdout, "%10s     %4.2lf\n\n", name, GPA);
   rv = fscanf(stdin, "%s %d", &name, &numberOfclasses);

   AVGgpa = allgpa + finalgpa;  
   fprintf(stdout, "====================\n");
   fprintf(stdout, "Average GPA is %4.2lf\n", AVGgpa);
   fprintf(stdout, "Highest GPA is %4.2lf\n", highgpa);
   fprintf(stdout, "====================\n");
   } 
   return 0;
}

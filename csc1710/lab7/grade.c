/*
   Name: Alex Sims
   Date: 2 / 27 / 15
   Class: CSC1710
   Location: csc1710/lab7/
   This program reads certain integers and values when user inputs data. The program tallies up all integer scores, and should print how many "A, B, C" statements; also should show the frequency of each grade, and also determine lowest C score and determine the next to the highest A score. This program is written in C langauge.
   1. Hello World!
   2. yes, 3, 4, 5
      no, all values
   3. hello
      bye
   4. d
   5. In the beginning if A meets value then prints A statement
      When both if statements A and B are false, then statement C will be execut      ed.
   6. hello  
*/
#include<stdio.h>
   int main (void) { 
   int A, B, C;
   int highest, low, count, value, grade;
   int i, frequency, Hg, Sh;
   int max = 0, vmax = 0;

   fscanf(stdin, "%d", &count);
   for (i=0; i<=count; i++){
      fscanf(stdin, "%d", &grade);
      if(grade >=88)
         A++;
         if (grade>Hg){
            Sh = Hg;
            Hg = grade;
        } else if(grade>Sh &&grade!=Hg)
            Sh=grade;
     else if(grade >=75)
            B++;
     else{
        C++;
        if(grade<low)
           low=grade;
}
                                       
   fprintf(stdout, "Grade          Frequency");
   fprintf(stdout, " A                3", max);
   fprintf(stdout, " B                4", vmax);
   fprintf(stdout, " C                3", low);
   fscanf(stdin, "%d %d %d", max, vmax, low);
   fprintf(stdout, "Lowest C score is: %d\n", low);
   fprintf(stdout, "The next to the highest A grade is: %d\n", highest);
   
   return 0;
   }
}

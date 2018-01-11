/*
 * Name: Alex Sims
 * Date: 8/16/15
 * Location: ~/csc1710-02/lab3
 * Comment:In this program the user will be prompted to enter their 3 quiz grades and a project grade 
which will be calculated accordingly. The 3 quiz grades will be averaged together as well as the project
grade seperately and grouped into printing out the total average of them.  
 */

#include <stdio.h>
int main (void)
{

    float q1, q2, q3, ps4, Avg, Avg1, sum;

    //printf("Please Enter 1 Quiz grade: \n", q1);
    scanf("%f", &q1); 
   
    //printf("Please Enter 2 Quiz grade: \n", q2);
    scanf("%f", &q2); 

    //printf("Please Enter 3 Quiz grade: \n", q3);
    scanf("%f", &q3); 

    //printf("Please Enter a Project grade: \n", ps4);
    scanf("%f", &ps4); 
    
    //Below the program will calculate quizes 1 through 3 and 1 project grade to be averaged together giving a final sum.total
    Avg = (q1 + q2 + q3)/3 * 10 * .2;
    Avg1 = (ps4 / 1) * 10 * .2;
    sum = (Avg + Avg1) / .4;
    
    printf("Your Total is: %f\n", sum);


    return 0;
}

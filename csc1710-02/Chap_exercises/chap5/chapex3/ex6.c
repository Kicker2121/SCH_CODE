#include<stdio.h>
int main (void)
{
   int i, x, y, div = 1000, number1, neg_high = -1000, neg_low = -9999;
   int number, high = 9999, low = 999;
   //The instructions
   fprintf (stdout, "=============================\n");
   fprintf (stdout, "=READ-INSTRUCTIONS-CORRECTLY=\n");
   fprintf (stdout, "=============================\n");
   fprintf (stdout, "If entered more than or less than 4 digits; you will be prompted again\n");
   fprintf (stdout, "================================================================\n");
   fprintf (stdout, "Please enter a four digit number between 1000 - 9999: \n");
   fprintf (stdout, "================================================================\n");

   fscanf (stdin, "%d", &number);
      //Determines whether the number entered is a true 4-digit number
      while (number <= low || number > high) {
         fprintf (stdout, "Invalid Entry; Program will restart\n");
         fscanf (stdin, "%d", &number);
      }
      //Loop uses switch statement
      for(i=0; i<=3; i++) { 
         number1 = number / div;
         number -= number1 * div;
         div = div/ 10;

   //If number 1 is a case #0 - 9; that case # will be is printed out
   switch (number1) {
      case 0 : fprintf (stdout, "zero ");
      break;
      case 1 : fprintf (stdout, "one ");
      break;
      case 2 : fprintf (stdout, "two ");
      break;
      case 3 : fprintf (stdout, "three ");
      break;
      case 4 : fprintf (stdout, "four ");
      break;
      case 5 : fprintf (stdout, "five ");
      break;
      case 6 : fprintf (stdout, "six ");
      break;
      case 7 : fprintf (stdout, "seven ");
      break;
      case 8 : fprintf (stdout, "eight ");
      break;
      case 9 : fprintf (stdout, "nine ");
      break;
      //If the 4 digit number is proven to be false in comparison with the cases; this will be printed out
      default : fprintf (stdout, "\n Invalid entry; please try again\n");
      break;
      }
   }     
   return 0;
}

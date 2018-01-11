#include<stdio.h>
int main (void)
{

int num1, num2;
int operator, operator2, operator3, operator4;

fprintf (stdout, "Please enter two expression values: \n");
fscanf (stdin, "%d %d", &num1, &num2);

operator  = num1 + 2 * num2 / 3 * num1;
operator2 = num1 + ((2*num2)/(3*num1));
operator3 = num1 + (2*(num2/3)) *num1;
operator4 = (num2 % num1) % (num2 / num1);

fprintf (stdout, "number 1 = %d and number 2 = %d\n", num1, num2);
fprintf (stdout, "Expression values are: \n");
fprintf (stdout, "operator = %d operator2 = %d operator3 = %d operator4 = %d\n", operator, operator2, operator3, operator4);

return 0;
}



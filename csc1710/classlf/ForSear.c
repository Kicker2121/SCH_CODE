/*
 * (1.) what if we were trying to find the largest character in a character array.  Rewrite the findLargest to accomplish the task.
 * (2.) what is we were trying to determine if a character array contained a particular character.  Rewrite the search to return t
 * ue if the given character is in the array and false otherwise.
 * (3.) Rewrite the findLargest function to return the position of the largest value.
 * (4.) Rewrite the search to return the position if the sv is in the array and return -1 if sv is not in the array.
 * *****DELETE QUESTIONS AFTER*****
*/


/* findLargest
 *    pre-condition: an array x[] and the number of elements in the array are provided
 *    post-condition: the function finds and returns the largest element in the array
 *                        
 */
int findLargest(char x[], int n)
{
     int i;
     char large = x[0];

     for(i=1; i<n; i++) {
         if(x[i] > large)
             large = x[i];
     }

     return i;
}

/* search - sequential search
 *    pre-condition: an array x[] and the number of elements in the 
 *    array are provided along with the value to search for in the array
 *    post-condition: the function returns true if the element is present and false otherwise.
 */

int search(char x[], int n, char sv)
{
     int i;
     
     for(i=0; i<n; i++) {
         if(x[i] == sv)
             return (i);
     }

     return (-1);
}


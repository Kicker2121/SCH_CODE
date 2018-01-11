/* Name:                MAIN************************
 * Date:
 * Class: CSC-1710 Fall 2014
 * Location: ~/root/csc1710/lab11 
 *
 * This is an image filter program.  Currently, it only performs one filter.
 * 1) filters a color image into a black and white image.
 *
 */
#include<stdlib.h>
#include<stdio.h>
#include"image.h"

int main()
{
   image_t orig_image; 
   image_t new_image; 

   read_image(stdin,&orig_image); 
   cvt_to_bw(&orig_image, &new_image);
   cvt_to_mirror(&orig_image, &new_image);   
   write_image(stdout,&new_image);

   return 0;
}

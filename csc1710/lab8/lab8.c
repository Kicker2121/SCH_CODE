/* Name: Alex Sims
 * Date: March 20, 2015 -> March _, 2015
 * Class: CSC 1710
 * Location of source code: ~/csc1710/lab8
 * General comment: The general comment provided by the programmer will be descri
 * ed shortly after the program is finished and correctly outputting the right cr
 * dentials with the given input, that will be all.
 * This program will create a ppm image of a flag representing the Flag of Fran
 * ce, Germany, or Lithuania. The user of the program will indicated which flag
 * by the following country codes:
 *         0-France, 1-Germany, and 2-Lithuania.
 * The user will also indicate the width of the flag. The height, style, and co
 * lors of the flags will be determined using the information found at http://en
 * .wikipedia.org/wiki.
 */ 

#include<stdio.h>
#include<stdlib.h>

void make_flag(int width, int h);
void make_ppm_header(char type[], int width, int h, int maxColor);
void make_pixel(unsigned char r, unsigned char g, unsigned char b);

int main (void)
{
   int width;  
   int country_code;

   /* Read image width and country code */
   fscanf(stdin, "%d %d", &country_code, &width);

   /*Output the following to stderr. You do not what this to go into the stdout output*/
   switch(country_code) {
     case 0: fprintf(stderr, "Making the Flag of France ");
             break;
     case 1: fprintf(stderr, "Making the Flag of Hungary ");
             break;
     case 2: fprintf(stderr, "Making the Flag of Sierra Leone ");
             break;
     default: fprintf(stderr, "Bad country code, try again\n");
              exit(1); //This will exit the program immediately.
   }
   fprintf(stderr, "with a width of %d,\n", width);
   
   /* Write the image data */
   //make_ppm_image(country_code, width);
   make_ppm_image(0, 0);
   make_ppm_image(1, 0);
   make_ppm_image(2, 0);
   make_ppm_image(3, 0);
   
   return(0);
}
//================================================================
/*
* Pre-condition
*    r, g, b - the red, green, blue color compnents of a pixel (all are values between 0 and 255)
* Post-condition
*  none
*/
//===============================================================
void make_pixel(unsigned char r, unsigned char g, unsigned char b)
{
   fprintf(stdout, "%c %c %c", r, g, b);
   country_code(0);
}
//================================================================
void make_ppm_image(int width, int h)
{
   make_header("P6", width, h, 255);
   make_flag(width, h);
}
//=================================================================
/*
 *  Pre-condition - the following should be the input to the function
 *     type = the type of ppm image - P6
 *     width, height of the image
 *     the maxColor
 *  Post-condition
 *   none
 */
//=================================================================
void make_ppm_header(char type[], int width, int h, int maxColor)
{
   fprintf(stdout, "%s\n", P6);
   fprintf(stdout, "#My image creation\n");
   fprintf(stdout, "%d %d\n", width, h);
   fprintf(stdout, "%d\n", maxColor);
}
//==================================================================
void make_flag(int width)
{
   //Calc French Flag
   int x;
   for (y= 0; y <= x; y++)
      for (x= width-1; x>= 0; x--)
           make_row(y, width, x);
}
//===================================================================
void make_French_row(int width, int h, int y, double r)
{
   int x;
   for (y= 0; y<= h-1; y++){  
       calc_pixel_color(x, y, r);
   }
} 
//==================================================================
void make_calc_French_pixel_color(int x, int y)
{
   int h = calc_h(x,y);

   if (col <= width/3.0)
       make_pixel_color (0,0,255);
   else if (col <= width * 2/3)
       make_pixel_color (255,255,255);
   else
       make_pixel_color (255,0,0);
}
//====================================================================
void make_flag(int width)
{
   //Make German Flag
   int y;
   for (x= 0; x <= y; x++)
      for (y = h-1; y>= 0; y--)
         make_row(y, width, x);
}
//====================================================================
void make_row(int width, int h, int y, double r)
{
   //Make German Row
   int x;
   for (x=0; x<=width-1; x++){
       calc_pixel_color(x, y, r);
   }
}
//===================================================================
void calc_pixel_color(int x, int y)
{
   //Calc German Pixel Color  
   int width = calc_width(x,y);
   if (col <= h/3.0)
      make_pixel (0,0,0);
   else if (col <= h * 2/3)
      make_pixel (255,0,0);
   else
      make_pixel (255,255,255);

}
//===================================================================
void calc_Hungary_pixel(char type[], unsigned char r, unsigned char g, unsigned char b)
{
   fprintf(stdout, "%c%c%c", r, g, b);
   country_code: (2);
}
//================================================================== 
void make_flag(int width)
{
   //Calc Lithuanian Flag
   int x;

   for (y = 0; y <= x; y++)
      for (x= width-1; x >= 0; x--)
         make_row(x, width, y);
}
//====================================================================
void make_row(int width, int h, int y, double r)
{
   //Make Lithuanian Row
   int x;
   for (y =0; y <= h; y++){
      for (x= width-1; x >= 0; x--)
         make_row(y, width, x, y, r);
   }
}
//====================================================================
void calc_pixel_color(int x, int y)
{
   //Calc Lithuanian Pixel Color
   double h;
   int h = calc_h(x, y);

   if (col <= width/3.0) 
       make_pixel (255,0,0);
   else if (col <= width * 2/3)
       make_pixel (0,0,0);
   else 
       make_pixel (0,255,0);
}
//======================================================================
void calc_Lithuanain_pixel(char type[], unsigned char r, unsigned g, unsigned b)
{
   fprintf(stdout, "%c%c%c", r, g, b);
   country_code: (3);
}


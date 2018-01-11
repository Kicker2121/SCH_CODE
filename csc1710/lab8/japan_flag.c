/* Name: R.Shore
 * Date: 10-8-10
 * Class: CSC-1710
 * Location: ~/rshore/HPU/csc1710...
 * This program will create a ppm image of a flag representing the Flag of Japan.
 * The user of the program must provide the width and height of the image as well
 * as the center coordinates and the radius of the red circle on the Japan Flag.
 * Please note, the program will use any center/radius combination.
 *
 */
#include<stdio.h>
#include<math.h>

/* function prototypes */
void make_ppm_image(int width, int height, int cx, int cy, double radius);
void make_flag(int width, int height, int cx, int cy, double radius);
void make_header(char type[], int width,int height, int maxColorCode);
void make_row(int y, int width, int cx, int cy, double radius);
void calc_pixel_color(int x, int y, int cx, int cy, double radius);
void make_pixel(unsigned char r, unsigned char g, unsigned char b);
double calc_dist(double x1, double y1, double x2, double y2);

int main()
{
   int width,height;
   int cx,cy;
   double radius;

   fscanf(stdin,"%d",&width);
   fscanf(stdin,"%d",&height);
   fscanf(stdin,"%d %d", &cx, &cy);
   fscanf(stdin,"%lf", &radius);

   make_ppm_image(width,height,cx,cy,radius);

   return 0;
}

/* make_ppm_image - this is the base function to generate a ppm type image
 *                  to stdout.  This includes the header information and 
 *                  the bytes to form each pixel in the image.
 * pre-condition:
 *    width and height of the input
 *    (cx,cy) and the radius of the circle within the image.
 * post-condition:
 *    no return value from the function - later functions will output the image to stdout
 */
void make_ppm_image(int width, int height, int cx, int cy, double radius)
{
   make_header("P6",width,height,255);
   make_flag(width,height,cx,cy,radius);
}


/* make_ppm_header – output the header for a ppm image to stdout 
 *  Pre-condition - the following should be the input to the function
 *        type = the type of ppm image - P2, P3, P5, or P6
 *        width, height of the image
 *        the maxColor 
 *  Post-condition
 *     none
 */
void make_header(char type[], int width,int height, int maxColorCode)
{
   //Output the header lines for a raw PPM image
   fprintf(stdout,"%s\n",type);
   fprintf(stdout,"# My Image creation\n");
   fprintf(stdout,"%d %d\n",width,height);
   fprintf(stdout,"%d\n",maxColorCode);
}



/* make_flag - this function iterates the possible y values (the row values)
 *             within the image.
 * pre-condition:
 *     width and height of the image
 *    (cx,cy) and the radius of the circle within the image.
 * post-condition:
 *    no return value from the function - later functions will output the image to stdout
 */
void make_flag(int width, int height, int cx, int cy, double radius)
{
   int y;
   for(y=height-1; y>=0; y--)
      make_row(y, width, cx,cy,radius);
}


/* make_ppm_row - this function marches down a row in the image.
 * pre-condition:
 *     width and height of the image
 *    (cx,cy) and the radius of the circle within the image.
 * post-condition:
 *    no return value from the function - later functions will output the image to stdout
 */
void make_row(int y, int width, int cx, int cy, double radius)
{
   int x;
   for(x=0; x<=width-1; x++) 
      calc_pixel_color(x,y,cx,cy,radius);

}


/* calc_pixel_color - determine the color of 1 pixel within the image
 * pre-condition: 
 *    (x,y) - the location of the pixel in the image
 *    (cx,cy) - the location of the center of the circle in the image
 *    radius - the radius of the circle
 * post-condition - one pixel (3 color components) will be sent to stdout.
 *    there is no output from the function
 */
void calc_pixel_color(int x, int y, int cx, int cy, double radius)
{
   double dist;

   dist = calc_dist(x,y,cx,cy);
   if(dist <= radius)
      make_pixel(255,0,0); 
   else
      make_pixel(255,255,255); 

}


/* make_pixel – output to stdout 3 bytes that represent the color of 1 pixel in an ppm image.
 *  Pre-condition 
 *       r, g, b – the red, green, blue color components of a pixel (all are values between 0 and 255)
 *  Post-condition
 *       none
 */
void make_pixel(unsigned char r, unsigned char g, unsigned char b)
{
   fprintf(stdout,"%c%c%c",r,g,b);
}


/* calc_dist - calculates the distance between two point
 * pre-condition:
 *    (x1,y1) and (x2,y2) - the values of two points must be provided
 * post-condition:
 *    The function returns the distance between (x1,y1) and (x2,y2)
 */
double calc_dist(double x1, double y1, double x2, double y2)
{
   double dist;
   dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
   return dist;
}

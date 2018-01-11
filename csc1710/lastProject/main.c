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


/* get_image - open a ppm image file and read into the image_t structure
 * pre-condition - 
 *    + message to display to alert the user which image file name to enter.
 *    + img will be the address to the image_t that will be loaded, initially
 *      it is empty.
 * post-condition - 
 *      the ppm image is loaded into an image_t at the address indicated
 *      in img.
 */
void get_image(const char message[], image_t *img);
/* put_image - open a file and write the image_t structure into a ppm 
 *             type image.
 * pre-condition - 
 *    + message to display to alert the user which image file name to enter.
 *    + img will be the address to the image_t that will be used
 *      in the output.
 * post-condition - 
 *    + nothing in the caller is altered.
 *                         
 */
void put_image(const char message[], image_t *img);

int main()
{
   image_t orig_image; 
   image_t new_image; 
   
   char type[2];

   printf("==========================\n");
   printf("     Image filtering\n");
   printf("==========================\n");
   printf("         Options\n");
   printf("(c)olor to Black and White\n");
   printf("(m)irror\n");
   printf("==========================\n");
   printf("Enter one of the above: \n");
   fscanf(stdin,"%1s",type);
   //Force the user to enter one of the
   //listed menu choices.
   while (type[0] != 'c' && type[0] != 'm') 
   {
      printf("Invalid input!\n");
      printf("Options: (c)olor\n");
      printf("         (m)irror\n");
      fscanf(stdin,"%1s",type);
   }

   //The next line was replaced by the get_image function.
   //Look in that function to see how we use read_image
   //read_image(stdin,&orig_image);
   get_image("original",&orig_image);
   
   //Decide which filter the user selected
   //create a new image from the original image
   if(type[0] == 'c') 
   {
      cvt_to_bw(&orig_image, &new_image);
   } 
   else if(type[0] == 'm') 
   {
      cvt_mirror(&orig_image, &new_image);
   }
   
   //The next line was replaced by the put_image function.
   //Look in that function to see how we use write_image.
   //write_image(stdout,&new_image);
   put_image("new",&new_image);
   
   return 0;
}
   
void get_image(const char message[], image_t *img)
{
   FILE *in_file;

   char image_filename[30];
   //open file, read in image, then close the file.
   fprintf(stdout,"Enter the %s image file name (no spaces): ", message);
   fscanf(stdin,"%s",image_filename);
   in_file=fopen(image_filename,"r");
   if(in_file==NULL) 
   {
      fprintf(stderr,"Error with %s image file: ",message);
      fprintf(stderr,"%s\n",image_filename);
      exit(1);
   }
   read_image(in_file, image_t img);
   fclose(in_file);
}

//===============================================================
void read_pixel(FILE *in_file, pixel_t *p)
{
   //read only the next piuxel in the input.
   fscanf(in_file, "%c", &p->red);
   fscanf(in_file, "%c", &p->green); 
   fscanf(in_file, "%c", &p->blue);
}
//================================================================
void read_row(FILE *in_file, image_t *img, int y)
{
   int x;
      for(x=0; x<=img->width-1; x++)
         read_pixel(in_file, &img->image[y][x]);
}

//================================================================
void read_image(FILE *in_file, image_t *img) 
{
   char newLineChar;
   int y;

   //Please note when a newLineChar is read. Reason: need to be ready
   //for the next item at the beginning of the line. To be consistent,
   //it's read everytime and discarded. Due to the nature of scanf/fscanf
   //you really only need it while readding the magicNumber and maxColor
   fscanf(in_file, "%[^\n]%c", img->magicNumber, &newLineChar);

   if(img->width < IMAGE_MAX_SIZE || img->height > IMAGE_MAX_SIZE) 
   {
      fprintf(stderr, "Either the width or height exceeds the max size of %d\n", IMAGE_MAX_SIZE);
      exit(1);
   }

   //Obserce the organization of thei mage in memory. This matches
   //the same way we palced the image in the first quadrant of the plane
   //In other words, the x and y values used to access the 2-D array
   //are the same as the (x,y) point locations of each pixel.
   //Also observe, the first subscript is the y values adn the second
   //subscript in the x value.
   for(y=img->height-1; y>=0; y--)
      read_row(in_file, img, y);
}  










 

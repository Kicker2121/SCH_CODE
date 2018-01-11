/* Name: Alex Sims                  IMAGE.c********************8
 * Date:
 * Class: CSC-1710 Fall 2014
 * Location: ~/root/csc1710/lab11
 * 
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"image.h"
//==================================================================
void read_pixel(FILE *in_file, pixel_t *p)
{
   //read only the next pixel in the input.
   fscanf(in_file,"%c",&p->red);
   fscanf(in_file,"%c",&p->green);
   fscanf(in_file,"%c",&p->blue);
}

//==================================================================
void read_row(FILE *in_file, image_t *img, int y)
{
   int x;

   for(x=0; x<=img->width-1; x++)
      read_pixel(in_file, &img->image[y][x]);
}

//==================================================================
void read_image(FILE *in_file, image_t *img)
{
   char newLineChar; 
   int y;

   //Please note when a newLineChar is read.  Reason: need to be ready
   //for the next item at the beginning of the line.  To be consistent,
   //it's read everytime and discarded.  Due to the nature of scanf/fscanf
   //you really only need it while reading the magicNumber and maxColor
   fscanf(in_file,"%[^\n]%c",img->magicNumber,&newLineChar);
   fscanf(in_file,"%[^\n]%c",img->comment,&newLineChar);
   fscanf(in_file,"%d%d%c",&img->width,&img->height,&newLineChar);
   fscanf(in_file,"%d%c",&img->maxColor,&newLineChar);

   if(img->width > IMAGE_MAX_SIZE || img->height > IMAGE_MAX_SIZE) 
   {
      fprintf(stderr,"Either the width or height exceeds the max size of %d\n",IMAGE_MAX_SIZE);
      exit(1);
   }

   //Observe the organization of the image in memory.  This matches 
   //the same way we placed the image in the first quadrant of the plane
   //In other words, the x and y values used to access the 2-D array
   //are the same as the (x,y) point locations of each pixel.
   //Also observe, the first subscript is the y value and the second
   //sbscript in the x value.
   for(y=img->height-1; y>=0; y--)
      read_row(in_file, img, y);
}


//==================================================================
void write_pixel(FILE *out_file, pixel_t p)
{
   //Fill in the body of this function 
   fprintf(out_file, "%c", p.red);
   fprintf(out_file, "%c", p.green);
   fprintf(out_file, "%c", p.blue);
}

//==================================================================
void write_row(FILE *out_file, image_t *img, int y)
{
   //Fill in the body of this function 
   int x;

   for (x = 0; x<=img->width-1; x++)
      write_pixel(out_file, img->image[y][x]);
}
//==================================================================
void write_image(FILE * out_file, image_t *img)
{
   //Fill in the body of this function 
   fprintf(out_file, "%s\n",img->magicNumber);
   fprintf(out_file, "%s\n",img->comment);
   fprintf(out_file, "%d %d\n",img->width, img->height);
   fprintf(out_file, "%d\n",img->maxColor);

   int y;

   for (y=img->height-1; y>=0; y--)
      write_row(out_file, img, y);
}
//==================================================================
pixel_t cvt_pixel_bw(pixel_t orig_p)
{
   unsigned char r,g,b;
   unsigned char bw;
   pixel_t new_p;

   r = orig_p.red;
   g = orig_p.green;  
   b = orig_p.blue;  
   //See image.h for the values of the WEIGHTs
   bw = (unsigned char)(r*RED_BW_WEIGHT+g*GREEN_BW_WEIGHT+b*BLUE_BW_WEIGHT);
   //assign the grey color to all color components
   new_p.red = new_p.green = new_p.blue = bw;
   return new_p;
}
 

//==================================================================
void cvt_to_bw(image_t *orig_img, image_t *new_img)
{
   int x,y;
   strcpy(new_img->magicNumber, orig_img->magicNumber);
   strcpy(new_img->comment,"#A black and white image created from a color image.\n");
   new_img->width = orig_img->width;
   new_img->height = orig_img->height;
   new_img->maxColor = orig_img->maxColor;

   //traverse each pixel in the image starting 
   //at the top left then working from 
   //left to right, top to bottom.
   for(y=new_img->height-1;y>=0; y--) 
      for(x=0; x<=new_img->width-1; x++) 
      {
         new_img->image[y][x] = cvt_pixel_bw(orig_img->image[y][x]);
      }
}
//==================================================================
void cvt_to_mirror(image_t *orig_img, image_t *new_img)
{
   int x, y;
   strcpy(new_img->magicNumber, orig_img->magicNumber);
   strcpy(new_img->comment, "#A color mirror image is created.\n");

   new_img->width = orig_img->width;
   new_img->height = orig_img->height;
   new_img->maxColor = orig_img->maxColor;
   
   for(y=new_img->height-1;y>=0; y--) 
      for(x=0; x<=new_img->width-1; x++) 
      {
         new_img->image[y][x] = orig_img->image[y][new_img->width-x-1];
      }
}
//================================================================== 

/* Name: Alex Sims
 * Date: October 08, 2015
 * Class: CSC1710-02 
 * Location: ~/root/csc1710-02/lab10/main.c
 * Comment: Program reads a PPM type image in P3 format from a file converting to a black and white image; PGB type image in P2 format. Converts a color image to a black and white image. 
 */

#include<stdio.h>
 
//*==============================================*/
struct pixel 
{
   unsigned char red;
   unsigned char green;
   unsigned char blue;
};

//*==============================================*/
struct imageType 
{
   char magicNumber[3];
   char comment[256];
   int width, height;
   int maxcolor;
   struct pixel image[1000][1000];
};

//*==============================================*/
void get_image (struct imageType imageA)
{
   FILE *in_file;
   char filename[30];

   fprintf (stderr, "Enter the 1st image (no spaces): ");
   fscanf (stdin, "%s", filename);

   in_file = fopen(filename, "r");
   if(in_file == NULL)
   {
      fprintf (stderr, "An incorrect value was stated somewhere!!\n");
      fprintf (stderr, "%s\n", filename);
      //return in_file;
   }
   //read_image(&imageA);
   fclose(in_file);
}

//*==============================================*/
void put_image (struct imageType imageA)
{
   FILE *out_file;
   char filename[30];

   fprintf (stderr, "Enter the image file name (no spaces): ");
   fscanf (stdin, "%s", filename);
   out_file = fopen(filename, "w");
   if(out_file == NULL)
   {
      fprintf (stderr, "An incorrect value was stated somewhere!!\n");
      fprintf (stderr, "%s\n", filename);
      //return out_file;
   }
   //read_image(&imageA);
   fclose(out_file);
}

//*=============================================*/
int read_image (struct imageType *imageA)
{
   FILE *in_file;
   char newlinechar;

   fscanf (in_file, "%[^\n]%c", &(*imageA).magicNumber, &newlinechar);
   fscanf (in_file, "%[^\n]%c", &(*imageA).comment, &newlinechar);
   fscanf (in_file, "%d %d", &(*imageA).width, &(*imageA).height);
   fscanf (in_file, "%d", &(*imageA).maxcolor);

   int x, y;
   fscanf (in_file, "%hhu", &(*imageA).image[y][x].red);
   fscanf (in_file, "%hhu", &(*imageA).image[y][x].green);
   fscanf (in_file, "%hhu", &(*imageA).image[y][x].blue);
}

//*=============================================*/
void write_ppm_header (struct imageType imageA)
{
   fprintf (stderr, "P6\n");
   fprintf (stderr, "%s\n", imageA.comment);
   fprintf (stderr, "%d %d\n", imageA.width, imageA.height);
   fprintf (stderr, "%d\n", imageA.maxcolor);
}

//*==============================================*/
int main (void)
{ 
   struct imageType imageA, image1, image2;
   
   read_image(&image1);
   read_image(&image2);
 
   write_ppm_header (imageA);
   int x, y;
   char img_red, img_green, img_blue;
   for (y = 0; y <= imageA.height-1; y++)
   {
      for (x = 0; x <= imageA.width-1; x++)
      {  
         img_red = imageA.image[y][x].red;
         //(int)new_red = (orig_red*.5 + orig_red*.5);
         
         img_green = imageA.image[y][x].green;
         //(int)new_green = (orig_green*.5 + orig_green*.5);

         img_blue = imageA.image[y][x].blue;
         //(int)new_blue = (orig_blue*.5 + orig_blue*.5);

         fprintf (stdout, "%c%c%c", img_red, img_green, img_blue);
         //fprintf (stdout, "%c%c%c", new_red, new_green, new_blue);       
      }           
   }
   return 0;
}

    

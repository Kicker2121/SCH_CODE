/* Name: Alex Sims
 * Date: October 08, 2015
 * Class: CSC1710-02 
 * Location: ~/root/csc1710-02/lab10/main.c
 * Comment: Program reads a PPM type image in P3 format from a file converting to a black and white image; PGB type image in P2 format. Converts a color image to a black and white image. 
 */

#include<stdio.h>
 
/*==============================================*/
struct pixel 
{
   unsigned char red;
   unsigned char green;
   unsigned char blue;
};

/*==============================================*/
struct imageType 
{
   char magicNumber[3];
   char comment[256];
   int width, height;
   int maxcolor;
   struct pixel image[1000][1000];
};

/*==============================================*/
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

/*==============================================*/
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

/*==============================================*/
int main (void)
{ 
   char newlinechar;
   struct imageType imageA;

   //Process of conversion
   //fprintf (stderr, "This program converts a color image to PPM\n");
   fscanf (stdin, "%[^\n]%c", &imageA.magicNumber, &newlinechar);
   fscanf (stdin, "%[^\n]%c", &imageA.comment, &newlinechar);
   fscanf(stdin,"%d %d", &imageA.width, &imageA.height);
   fscanf(stdin,"%d", &imageA.maxcolor);

   //image format and writing pixel
   fprintf (stdout, "P6\n");
   fprintf (stdout, "%s\n", imageA.comment);
   fprintf (stdout, "%d %d\n", imageA.width, imageA.height);
   fprintf (stdout, "%d\n", imageA.maxcolor);
   
   int x, y;
   char img_red, img_green, img_blue;
   for (y = 0; y <= imageA.height-1; y++)
   {
      for (x = 0; x <= imageA.width-1; x++)
      { 
         fscanf (stdin, "%hhu", &imageA.image[y][x].red);
         fscanf (stdin, "%hhu", &imageA.image[y][x].green);
         fscanf (stdin, "%hhu", &imageA.image[y][x].blue);   
                 
         img_red = imageA.image[y][x].red;
         img_green = imageA.image[y][x].green;
         img_blue = imageA.image[y][x].blue;
         fprintf (stdout, "%c%c%c", img_red, img_green, img_blue);       
      }
   }
   return 0;
}

    

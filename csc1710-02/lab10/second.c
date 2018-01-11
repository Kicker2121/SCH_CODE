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
void get_image (FILE *in_file char message[], struct imageType *imageA)
{
   char imageA.Type;
   FILE *in_file;

   fprintf (stdout, "Enter the %s image file name (no spaces): ", message);
   fscanf (stdin, "%s", image_filename);
   in_file = fopen(image_filename, "r");
   if(in_file == NULL)
   {
      fprintf (stderr, "Error with %s image file: ", message);
      fprintf (stderr, "%s\n", image_filename);
      exit(1);
   }
   //read_image(image1, image2);
   fclose(in_file);
}

//#4
/*===============================================*/
void put_image (FILE *out_file char message[], struct imageType *imageA)
{
   char imageA.Type;
   FILE *out_file;

   fprintf (stdout, "Enter the %s image file name (no spaces): ", message);
   fscanf (stdin, "%s", image_filename);
   out_file = fopen(image_filename, "r");
   if(outfile == NULL)
   {
      fprintf (stderr, "Error with %s image file: ", message);
      fprintf (stderr, "%s\n", image_filename);  
      exit(1);
   }
   fprintf (out_file, "%s\n", (*imageA).magicNumber);
   fprintf (out_file, "%s\n", (*imageA).comment);
   fprintf (out_file, "%d %d\n", (*imageA).width, (*imageA).height);
   fprintf (out_file, "%d\n", (*imageA).maxcolor); 
   
   //read_image(image1, image2);
   fclose(out_file);
}

//#5
void read_image (struct imageType *imageA)
{
   fscanf (in_file, "%[^\n]%c", &(*imageA).magicNumber, &newlinechar);
   fscanf (in_file, "%[^\n]%c", &(*imageA).comment, &newlinechar);
   fscanf (in_file, "%d %d", &(*imageA).width, &(*imageA).height);
   fscanf (in_file, "%d", &(*imageA).maxcolor); 
}

void write_image (struct imageType *imageA)
{
   struct pixel;

   int weightS = .7; //stronger image
   int weightW = .3; //weaker image

   for (int i = 0; i <= width*height; i++)
   {
      red = (*imageA)      



   }




}


/*==============================================*/
int main (void)
{
   char newlinechar;   
   struct imageType imageA, image1, image2;
   
   //Process of conversion
   fscanf (stdin, "%[^\n]%c", &(*imageA).magicNumber, &newlinechar);
   fscanf (stdin, "%[^\n]%c", &(*imageA).comment, &newlinechar);
   fscanf(stdin,"%d %d%c", &(*imageA).width, &(*imageA).height);
   fscanf(stdin,"%d", &(*imageA).maxcolor);

   //image format and writing pixel
   fprintf (stdout, "P6\n");
   fprintf (stdout, "#%s\n", (*imageA).comment);
   fprintf (stdout, "%d %d\n", (*imageA).width, (*imageA).height);
   fprintf (stdout, "%d\n", (*imageA).maxcolor);
   
   int x, y;
   for (y = 0; y <= (*imageA).height-1; y++)
   {
      for (x = 0; x <= (*imageA).width-1; x++)
      { 
         fscanf (stdin, "%hhu", &(*imageA).image[y][x].red);
         fscanf (stdin, "%hhu", &(*imageA).image[y][x].green);
         fscanf (stdin, "%hhu", &(*imageA).image[y][x].blue);   
      }
   }
   read_image(&image1);
   read_image(&image2);


   return 0;
}

    

/*
   Name: Akex Sims
   Date: 1-6-15
   Location: ~/csc1710/pixel/color/
   This program is based on color and pixel related
*/
#include<stdio.h>
int main (void) 
{   
   int Red, Green, Blue;
   unsigned char Pixel1Red;
   unsigned int  Pixel1Green;
   unsigned int  Pixel1Blue;
//---------------------------------
   unsigned int  Pixel2Red;
   unsigned int  Pixel2Green;
   unsigned int  Pixel2Blue;
//---------------------------------
   double Factor = 0;
   //int Red  = 5E493D;
   unsigned int NewPixelRed = 0;
   unsigned int NewPixelGreen = 0;
   unsigned int NewPixelBlue = 0;
//===================================
// Reads and Writes 1st Pixel value for each color component
//===================================
   fprintf(stdout, "Enter a Red Value for the First Pixel: \n");
      fscanf(stdin, "%hhu", &Pixel1Red);
   fprintf(stdout, "Enter a Green Value for the First Pixel: \n");
      fscanf(stdin, "%hhu", &Pixel1Green);
   fprintf(stdout, "Enter a Blue Value for the First Pixel: \n");
      fscanf(stdin, "%hhu", &Pixel1Blue);
//===================================
// Reads and Writes 2nd Pixel value for each color component
//===================================
   fprintf(stdout, "Enter a Red Value for the Second Pixel: \n");
      fscanf(stdin, "%hhu", &Pixel2Red);
   fprintf(stdout, "Enter a Green Value for the Second Pixel: \n");
      fscanf(stdin, "%hhu", &Pixel2Green);
   fprintf(stdout, "Enter a Blue Value for the Second Pixel: \n");
      fscanf(stdin, "%hhu", &Pixel2Blue); 
// Reads and Writes Factor value
   fprintf(stdout, "Enter a Factor Value: ");
      fscanf(stdin, "%d", &Factor);
// Reads and Writes Hex Code for color components   
   //fprintf(stdout, "Enter the Hex code for designated color: ");
   //fscanf(stdin, "%x", &Red);
   //Calculating new pixel value by 1st and 2nd pixel values
   NewPixelRed = Pixel1Red*Factor + Pixel2Red*(1-Factor);
   NewPixelGreen = Pixel1Green*Factor + Pixel2Green*(1-Factor);
   NewPixelBlue = Pixel1Blue*Factor + Pixel2Blue*(1-Factor);

   fprintf(stdout, "%hhu\n", NewPixelRed);   
   fprintf(stdout, "%hhu\n", NewPixelGreen);
   fprintf(stdout, "%hhu\n", NewPixelBlue);
   
   fprintf(stdout, "What is the original colors: %hhu\n", Red);
   fscanf(stdin, "Red = %hhu", &Red);
   fprintf(stdout, "What is the bending factor: %hhu\n", Green);
   fscanf (stdin, "Green = %hhu", &Green);
   fprintf(stdout, "What is the color of the new pixel: %hhu\n", Blue);
   fscanf(stdin, "Blue = %hhu", &Blue);

   return 0;
}



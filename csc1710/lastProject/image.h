/* Name:  Alex Sims               Image.h****************
 * Date:
 * Class: CSC-1710 Fall 2013
 * Location: 
 * 
 *
 */

#include<stdlib.h>

#define IMAGE_MAX_SIZE 1000

#define RED_BW_WEIGHT 0.3
#define GREEN_BW_WEIGHT 0.6
#define BLUE_BW_WEIGHT 0.1

typedef struct pixelType 
{
   unsigned char red;
   unsigned char green;
   unsigned char blue;
} pixel_t;

typedef struct imageType 
{
   char magicNumber[3];
   char comment[256];
   int width, height;
   int maxColor;
   pixel_t image[IMAGE_MAX_SIZE][IMAGE_MAX_SIZE]; 
} image_t; 


// imageType definition goes here









/**************************************************
 * read_pixel - read one ppm type pixel at the next position in a file
 * pre-condition - in_file is a file pointer that has been established
 *                 and should be pointing to 3 chars representing on 
 *                 ppm type pixel in a file.
 *                 p is a struct pixelType pointer, pointing to where to store
 *                 the pixel read
 * post-condition - *p is loaded with a ppm type pixel
 *                 in_file is point at the end of the file
 */
void read_pixel(FILE *in_file, pixel_t *p);

/**************************************************
 * read_row - read a row of a ppm type image from a file
 * pre-condition - in_file is a file pointer that has been established
 *                 img is an struct imageType pointer that points to a 
 *                 struct imageType which is empty (or can be overwritten)
 *                 y is the current row to read into memory
 * post-condition - img is loaded with a ppm image
 *                  in_file is pointing at the end of the file
 */
void read_row(FILE *in_file, image_t *img, int y);

/**************************************************
 * read_image - read a ppm type image from a file
 * pre-condition - in_file is a file pointer that has been established
 *                 img is an struct imageType pointer that points to a 
 *                 struct imageType which is empty (or can be overwritten)
 * post-condition - img is loaded with a ppm image
 *                  in_file is pointing at the end of the file
 */
void read_image(FILE *in_file, image_t *img);

/**************************************************
 * write_pixel - write one ppm type pixel to the next position in a file
 * pre-condition - newLineChar is read
 *                 
 *                
 *               
 * post-condition - 
 *                 
 */
void write_pixel(FILE *out_file, pixel_t p);
/**************************************************
 * write_row - write one ppm type pixel to the next position in a file
 * pre-condition - in_file in which next to the position in a file is
 *                 established img is an struct imageType pointer that
 *                 points next to a struct imageType which is empty, x
 *                 is the current row to write into memory of a file
 * post-condition - img is written after the img is read with the ppm img 
 *                  reader in_file to the out_file that is pointing next
 *                  to the end of the file
 */                 
void write_row(FILE *out_file, image_t *img, int y);

/**************************************************
 * write_image- read a ppm type image from a file
 * pre-condition - in_file writes a row of pixels in a struct Typedef 
 *                 printing out file img standards and components that
 *                 make up the size of the img in the memory file
 *              
 * post-condition - 
 */
void write_image(FILE *out_file, image_t *img);

/*************************************************
 * cvt_pixel_bw - convert a color pixel into a black and white pixel
 * pre-condition - orig_p contains a color ppm type pixel
 * post-condition - a black and white ppm type pixel is returned.
 */
pixel_t cvt_pixel_bw(pixel_t orig_p);

/*************************************************
 * cvt_to_bw - convert a color image to a black and white image
 * pre-condition - orig_img is a pointer to an struct imageType containing the
 *                 information about a ppm (P6) type image
 *                 new_img is an struct imageType pointer that points to 
 *                 a struct imageType which is empty (or can be overwritten)
 * post-condition - orig_img is not altered
 *                  new_img contains the information for a black and white
 *                  image created from the orig_img
 */
void cvt_to_bw(image_t *orig_img, image_t *new_img);

//==================================================================
/**************************************************
 * cvt_to_mirror - creating a mirror image
 * pre-condition - orig_img is mirrored making a copy of two ppm images 
 *                 overlaying ontop one another presenting a new ppm black
 *                 and white img
 * post-condition - orig_img is altered and the new_img black and white img
 *                  is created and swapped/reversed
 */
void cvt_to_mirror(image_t *orig_img, image_t *new_img);



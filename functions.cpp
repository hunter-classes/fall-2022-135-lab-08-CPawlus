#include <iostream>
#include "imageio.h"

// Functions
void invert() 
{  
   const int MAX_H = 512;
   const int MAX_W = 512;
   std::string input = "inImage.pgm";
   int img[MAX_H][MAX_W];
   int h, w;
   readImage(input, img, h, w); 

   int out[MAX_H][MAX_W];
   for(int row = 0; row < h; row++) 
   {
      for(int col = 0; col < w; col++) 
      {
         out[row][col] = img[row][col];
      }
   }
   
   // Functionality
   for(int row = 0; row < h; row++) 
   {
      for(int col = 0; col < w; col++) 
      {
         out[row][col] = abs(out[row][col]-255);
      }
   }

   writeImage("taskA.pgm",out, h, w);
}

void invert_half() 
{  
   const int MAX_H = 512;
   const int MAX_W = 512;
   std::string input = "inImage.pgm";
   int img[MAX_H][MAX_W];
   int h, w;
   readImage(input, img, h, w); 

   int out[MAX_H][MAX_W];
   for(int row = 0; row < h; row++) 
   {
      for(int col = 0; col < w; col++) 
      {
         out[row][col] = img[row][col];
      }
   }
   
   // Functionality
   for(int row = 0; row < h; row++) 
   {
      for(int col = col/2; col < w; col++) 
      {
         out[row][col] = abs(out[row][col]-255);
      }
   }

   writeImage("taskB.pgm",out, h, w);
}

void box() 
{  
   const int MAX_H = 512;
   const int MAX_W = 512;
   std::string input = "inImage.pgm";
   int img[MAX_H][MAX_W];
   int h, w;
   readImage(input, img, h, w); 

   int out[MAX_H][MAX_W];
   for(int row = 0; row < h; row++) 
   {
      for(int col = 0; col < w; col++) 
      {
         out[row][col] = img[row][col];
      }
   }
   
   // Functionality
   for(int row = h/4; row < h/2+48; row++) 
   {
      for(int col = w/4; col < w/2+64; col++) 
      {
         out[row][col] = 255;
      }
   }

   writeImage("taskC.pgm",out, h, w);
}

void frame() 
{  
   const int MAX_H = 512;
   const int MAX_W = 512;
   std::string input = "inImage.pgm";
   int img[MAX_H][MAX_W];
   int h, w;
   readImage(input, img, h, w); 

   int out[MAX_H][MAX_W];
   for(int row = 0; row < h; row++) 
   {
      for(int col = 0; col < w; col++) 
      {
         out[row][col] = img[row][col];
      }
   }
   
   // Functionality
   for(int row = h/4; row < h/2+48; row++) 
   {
      for(int col = w/4; col < w/2+64; col++) 
      {
         if((row == h/4 || row == h/2+47) || (col == w/4 || col == w/2+63)) 
         {
            out[row][col] = 255;
         }
      }
   }

   writeImage("taskD.pgm",out, h, w);
}

void scale() {
   std::string input = "inImage.pgm";
   int img[MAX_H][MAX_W];
   int h, w;
   readImage(input, img, h, w);

   int out[MAX_H][MAX_W];
   int r, c;
   for(int row = 0; row < h/2; row++) 
   {
      for(int col = 0; col < w/2; col++) 
      {
      r = row*2;
      c = col*2;
      out[r][c] = img[row][col];
      out[r+1][c] = img[row][col];
      out[r][c+1] = img[row][col];
      out[r+1][c+1]= img[row][col];
      }
   }
   writeImage("taskE.pgm",out, h, w);
}

void pixelate() 
{
   std::string input = "inImage.pgm";
   int img[MAX_H][MAX_W];
   int h, w;
   readImage(input, img, h, w);

   int out[MAX_H][MAX_W];
   int r, c, avg;
   // Functionality
   for(int row = 0; row < h; row+=2) 
   {
      for(int col = 0; col < w; col+=2) 
      {
         //r = row*2;
         //c = col*2;
         out[row][col] = img[row][col];
         out[row+1][col] = img[row][col];
         out[row][col+1] = img[row][col];
         out[row+1][col+1]= img[row][col];
      }
   }
   writeImage("taskF.pgm",out, h, w);
}

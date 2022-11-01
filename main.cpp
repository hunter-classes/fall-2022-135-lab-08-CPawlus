/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Image Processing, main.cpp, Lab 8.

This program maniplutes RGB values of images 
through EOG to generate different images.
*/
#include <iostream>
#include "functions.h"

int main() 
{
   invert();
   invert_half();
   box();
   frame();
   scale();
   pixelate();
   return 0;
}
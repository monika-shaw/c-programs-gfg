//
// Created by shawm on 07-06-2022.
//
#include <stdio.h>
#include <stdlib.h>

double isVolume(double height, double width, double depth)
{
    double volume;
    volume = (height * width * depth);
    return volume;
}

int main(void){

      double height = 10, width = 12, depth = 8;
      double result = isVolume(height, width, depth);
      printf("%0.2lf",result);
      return EXIT_SUCCESS;
}
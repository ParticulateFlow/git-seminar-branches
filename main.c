/**
 * @file main.c
 * Approximate the value of pi
 * Adapt the function 'approximate_pi' according to the instructions
 * to get a more accurate value of pi
 * 
 * @note $ gcc main.c -o ApproximatePi -lm
 * @author Daniel Queteschiner
 * @date January 2022
 */

#include <stdio.h>
#include <math.h>


double approximate_pi()
{
  return 22./7.;
}


int main(int argc, char *argv[])
{
  printf("Approximate value of pi = %.15f\n", approximate_pi());
  return 0; 
}

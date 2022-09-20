#include "main.h"
#include <stdio.h>

/**
 *File name: 1-swap.c
 *Description: Write a function that swaps the values of two integers.
 *Return : always (0)
 */

void swap_int(int *a, int *b)
{
  int c;

c = *a;
*a = *b;
*b = c;

}

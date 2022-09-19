#include "main.h"
#include <stdio.h>
/**
 * Author : Kanyunyuzi Sunitah
 * File Name: 0-reset_to_98
 *
 *A function that takes a pointer to an int as parameter and updates the value  and points to to 98.
 * Return: Always (0)
 */
int main(void)
{
  int n;
  n = 402;
}
 
/**main - parameters are passed by value
  *
  *Return: ALways 0.
  */

void reset_to_98 (int *n)
{
   n = &n;
   reset_to_98(n)
   *n = 98;
   printf("%p\n", n);
   printf("%d\n",n):
   return(0);
}


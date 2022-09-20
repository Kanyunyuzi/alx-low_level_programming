#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *File name : 2-strlen.c
 *Description : Write a function that returns the length of a string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count++;
	}

	return (count);
}  

/*
 *FIle name: 1-alphabet.c
 *Author: Kanyunyuzi Sunitah
 *A program that prints the alphabet in lowercase
 *main - Entry point
 *
 *Return: Always 0
 */
#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase followed by a new line
 * Return 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
    

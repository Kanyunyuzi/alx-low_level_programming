#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = strlen(str);
    printf("%d\n", len);
    return (0);
}

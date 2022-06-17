#include "main.h"
#include <string.h>
#include <stdio.h>
/*
 * _strcat - a function
 *return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src);
	return (dest);

}

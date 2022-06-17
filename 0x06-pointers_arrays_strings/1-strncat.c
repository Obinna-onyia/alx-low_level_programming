#include "main.h"
#include <string.h>
#include <stdio.h>
/*
 *_strncat - a function
 *dest - destination string
 *src - source string
 *n - third param
 *return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

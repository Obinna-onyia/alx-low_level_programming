#include <stdio.h>
#include "main.h"
/*
 **_strcat - function to concatenate strings
* @dest:destination value
* @src: source value
 *return: a string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;
	while (dest[len] != '\0')
		len++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

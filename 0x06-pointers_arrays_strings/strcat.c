#include "main.h"
/*
 * *_strcat - a function to concatenate string
 *  dest: destination string
 *  src: source string
 *  return: a string
 *
 */
char *_strcat(char *dest, char *src, int n){
	strncat(dest, src, n);
	
	return (dest);
}

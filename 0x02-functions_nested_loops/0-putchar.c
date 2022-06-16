#include <stdio.h>

/**
 * main - prints a string
 * Return: 0 (success)
 */
int main(void)
{
	char e[] = "_putchar";
	int i = 0;
	for (e[i] != '\0'){
		_putchar(e[i]);
		i++;
	}
	_putchar("\n");
	return (0);
}

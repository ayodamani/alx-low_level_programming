#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
    
	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		dest[j] = src[j];

	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return dest;
}

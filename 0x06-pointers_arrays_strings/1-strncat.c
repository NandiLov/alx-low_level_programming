#include "main.h"
/**
 **_strncat - Concatenates the string pointed to by @src, including the x
 *@n: bytes to be copied
 *@dest: A pointer to the string to be concatenated upon.
 *@src: The source string to be appended to @dest.
 *Return: A pointer to the destination string @dest.
 */
char *_strncat(char *dest, const char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

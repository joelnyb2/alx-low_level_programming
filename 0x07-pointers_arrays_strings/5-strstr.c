#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: orginal string passed as an argument
 * @needle: substring to be found passed as an argument
 * Return: address of the substring first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (needle[i] != '\0')
	{
		while (haystack[j] != '\0')
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
			j++;
		}
		i++;
	}
	return ('\0');
}

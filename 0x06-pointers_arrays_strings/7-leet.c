#include "main.h"

/**
  * leet - encodes a string
  * @s: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *s)
{
	int z = 0, p = 0, w = 5;
	char d[5] = {'A', 'E', 'O', 'T', 'L'};
	char c[5] = {'4', '3', '0', '7', '1'};

	while (s[z])
	{
		p = 0;

		while (p < w)
		{
			if (s[z] == d[p] || s[z] - 32 == d[p])
			{
				s[z] = c[p];
			}

			p++;
		}

		z++;
	}

	return (s);
}

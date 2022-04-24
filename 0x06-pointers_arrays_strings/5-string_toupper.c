#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @w: string
  *
  * Return: char variable
  */
char *string_toupper(char *w)
{
	int s = 0;

	while (w[s])
	{
		if (w[s] >= 97 && w[s] <= 122)
		{
			w[s] -= 32;
		}

		s++;
	}

	return (w);
}

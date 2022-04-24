#include "main.h"
#include <stdio.h>

/**
  * rot13 - encodes a string in rot13
  * @q: string to be encoded
  *
  * Return: char var
  */
char *rot13(char *q)
{
	int d = 0;

	while (q[d])
	{
		while ((q[d] >= 'a' && q[d] <= 'z') || (q[d] >= 'A' && q[d] <= 'Z'))
		{
			if ((q[d] > 'm' && q[d] <= 'z') || (q[d] > 'M' && q[d] <= 'Z'))
			{
				q[d] -= 13;
				break;
			}

			q[d] += 13;
			break;
		}

		d++;
	}

	return (q);
}

#include <stdio.h>
#include "main.h"

<<<<<<< HEAD
int main(void)
=======

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *s)

>>>>>>> 698d4d0aec77a7aa399af9196dff6b52c841fd9a
{
  int n;
  int a[5];
  int *p;

<<<<<<< HEAD
  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
=======
	int i, j;



	char spe[13] = {' ', '\t', '\n', ',', ';', '.',

		'!', '?', '"', '(', ')', '{', '}'};



	for (i = 0; s[i] != '\0'; i++)

	{

		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')

			s[i] -= 32;



		for (j = 0; j < 13; j++)

		{

			if (s[i] == spe[j])

			{

				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')

				{

					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
>>>>>>> 698d4d0aec77a7aa399af9196dff6b52c841fd9a
}

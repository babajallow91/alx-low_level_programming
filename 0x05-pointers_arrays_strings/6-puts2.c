#include <stdio.h>
<<<<<<< HEAD
=======

>>>>>>> 649a5aa02400df19ec9c1c7c8628e65bf2543020
#include "main.h"



/**
<<<<<<< HEAD
 * puts2 - prints every other character
 * @str: string
 *
 * Return: nothing
 */

=======

 * puts2 - prints every other character

 * @str: string

 *

 * Return: nothing

 */



>>>>>>> 649a5aa02400df19ec9c1c7c8628e65bf2543020
void puts2(char *str)

{
<<<<<<< HEAD
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
=======

	int i = 0;



	while (*(str + i) != '\0')

	{

		if (i % 2 == 0)

			putchar(*(str + i));

		i++;

	}

	putchar(10);

>>>>>>> 649a5aa02400df19ec9c1c7c8628e65bf2543020

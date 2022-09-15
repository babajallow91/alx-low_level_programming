#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print numbers from n to 98,
 * @n:first integer value
 *
 * Return: the summation.
 */
void print_to_98(int n)
{

    if (n < 98) {
        while (n <= 98) {
            printf("%d", n);
            if (n != 98)
                printf(", ");
        }
        n++;
    } else if (n >= 98) {
        while (n >= 98) {
            if (n != 98)
                printf("%d", n);
            if(n != 98)
                printf(", ");
        }
        n--;
    } else
        printf("98");

    printf("\n");

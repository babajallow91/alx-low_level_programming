#include <stdio.h>
#include <math.h>

<<<<<<< HEAD
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
=======
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
>>>>>>> 2859ab968b3fbba4921ca912b56a9532456a40e2

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main  -     print the alphabits.
 * Return: 0.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i == 'q') || (i == 'e'))
		{}
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}

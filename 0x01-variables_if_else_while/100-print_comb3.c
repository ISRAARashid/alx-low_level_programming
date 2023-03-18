#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main  -     print the alphabits.
 * Return: 0.
 */
int main(void)
{
	int i;
	int x;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (i < x)
			{
				putchar(i);
				putchar(x);
				if ((i == '8') && (x == 9))
				{}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

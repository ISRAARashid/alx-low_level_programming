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
			if (x < i)
			{
				putchar(x);
				putchar(i);
				if ((x == '8') && (i == 9))
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

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
			for (k = '0'; k <= '9'; k++)
			{
				if ((i < x) && (x < k))
				{
					putchar(i);
					putchar(x);
					putchar(k);
					if ((i == '7') && (x == '8') && (k == '9'))
					{}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

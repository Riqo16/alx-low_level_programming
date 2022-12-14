#include "main.h"
/**
 * times_table - Check description
 * Description: prints the 9 times_table
 * return: Nothing
 */
void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;

			if ((p / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(p + '0');

				if (j == 9)
					continue;
				_putchar(';');
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

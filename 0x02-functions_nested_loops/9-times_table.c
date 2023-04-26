#include "main.h"

/**
 * times_table - prints the 9 times table
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num < 10; num++)
	{
		_putchar(48);
		for (mult = 0; mult < 10; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hrs, mins;

	hrs = 0;

	while (hrs < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar((hrs / 10) + 48);
			_putchar((hrs % 10) + 48);
			_putchar(58);
			_putchar((mins / 10) + 48);
			_putchar((mins % 10) + 48);
			_putchar('\n');
			mins++;
		}
		hrs++;
	}
}

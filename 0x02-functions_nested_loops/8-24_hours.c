#include "main.h"
/* A function that prints every minute of the day */

	/**
	 * jack_bauer - function prints every minute in a day
	 *
	 * takes no parameter
	 *
	 * return nothing
	 */void jach_bauer(void)
{
	int min;
	int hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + hr / 10);
			_putchar('0' + hr % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
	}
}

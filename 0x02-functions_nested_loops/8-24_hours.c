#include "main.h"
#include <stdio.h>

/**
 * jack_bauber - function prototype hat return time
 * @minutes: return minutes of an hour
 * $hours: return hours of the day
 */

void jack_bauer(void)
{
int minutes;
int hours;

for (hours = 0; hours < 24; hours++)
{
	for (minutes = 0; minutes < 60; minutes++)
	{
		printf("%02d:%02d\n", hours, minutes);
	}
}
}

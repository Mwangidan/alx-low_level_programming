#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int c = 0;
unsigned int i = 0;
int m = 1;
int is = 0;

while (s[c])
{
	if (s[c] == 45)
	{
		m *= -1;
	}
while (s[c] >= 48 && s[c] <= 57)
{
	is = 1;
	i = (i * 10 + (s[c]) - '0');
	c++;
}
if (is == 1)
{
	break;
}
c++;
}
i *= m;
return (i);
}

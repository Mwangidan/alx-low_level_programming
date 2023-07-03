#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char _alphabet;

	for (_alphabet = 'a'; _alphabet <= 'z'; _alphabet++)
	{
		_putchar(_alphabet);
	}
	_putchar('\n');

}


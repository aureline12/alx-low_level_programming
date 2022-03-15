#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
        char n;
	int i=0;
	
	 while (i<10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}

}


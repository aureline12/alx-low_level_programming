#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase
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
		i=i+1;
		_putchar('\n');
	}

}


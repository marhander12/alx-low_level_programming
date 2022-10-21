#include "main.h"

/**
  * print_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */
void print_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		_putchar(c++  + '0');
	}

	_putchar('\n');
}


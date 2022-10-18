#include "main.h"

/**
  * _abs - Computes_the_absolute_value_of_an_integer.
  * @c: The number to be computed.
  *
  * Return: Absolute_value_of_number_or_zero
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}


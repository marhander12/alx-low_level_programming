#include "main.h"

/**
  * _islower - Checks_for_lowercase_character
  * @c:_The_character_to_be_checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}


#include "main.h"

/**
 * _isalpha - Checks  alphabetic char
 * @c: char to be checked
 * Return: if c is a letter 1, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

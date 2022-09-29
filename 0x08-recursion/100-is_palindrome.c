#include "main.h"

/**
 * length - Returns the length of a string
 * @s: The string to be measured
 * Return: The length of @s
 */
int length(char *s)
{
	if (*s)
		return (1 + length(s + 1));
	else
		return (0);
}


/**
 * _is_palindrome - check whether a string is palindrome or otherwise
 * @s: the string to check
 * @l: @s 's length
 * @i: index of the string to check
 * Return: 1 if the string is a palindrome and 0 if not.
 */
int _is_palindrome(char *s, int l, int i)
{
	if (*(s + i) == *(s + l / 2))
		return (1);

	if (*(s + i) == *(s + l - i - 1))
		return (_is_palindrome(s, l, i + 1));

	return (0);
}


/**
 * is_palindrome - checks whether a string is palindrome
 * @s: the string to check
 * Return: 1 if @n is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (_is_palindrome(s, length(s), 0));
}


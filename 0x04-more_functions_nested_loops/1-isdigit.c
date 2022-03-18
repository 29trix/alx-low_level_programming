#include "stdio.h"
/**
 * _isdigit - Entry point
 * @c: integer t check
 * Return: 1 if successful, otherwise 0
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

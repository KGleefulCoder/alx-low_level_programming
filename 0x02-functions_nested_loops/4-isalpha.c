#include"main.h"

/** 
 * _isalpha - check if character is letter both
 * lowercase or uppercase
 * @c: takes input from other functions.
 * Return: 1 is c if true else 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 61 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

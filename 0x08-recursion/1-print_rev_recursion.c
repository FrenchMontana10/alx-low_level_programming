#include "main.h"

/**
 *  * _print_rev_recursion - a function that prints string in reverse
 *   * @s: String input
 *    * Return: string
 *     */

void _print_rev_recursion(char *s)
{
		if (*s != '\0')
				{
							_print_rev_recursion(s + 1);
									_putchar(*s);
										}
}

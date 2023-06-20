#include <stdio.h>
/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c = 'a';

while (c <= 'z')
	{
		putchar(c);
		c++;
	}
putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}

#include <stdio.h>
/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char c = 'a';
	int i = 1;

	for (i = 1 ; i <= 10 ; ++i)
	{
		for (c = 'a' ; c <= 'z' ; ++c)
		putchar(c) ;
		putchar ('\n') ;
	}
}
int main(void)
{
	print_alphabet() ;
	return (0);
}

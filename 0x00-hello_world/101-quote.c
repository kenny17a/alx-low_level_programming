#include <stdio.h>
#include <unistd.h>

/**
 * main - This should successfully print out the text
 *
 * Return: 1 if there are no errors
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}

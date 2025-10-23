#include 'main.h'

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Description: Uses _putchar to print all lowercase letters from a to z
 * Return: void
 */
void print_alphabet(void)
{
char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

}

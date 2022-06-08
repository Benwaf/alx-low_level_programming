#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times in lowercase
*
* Return: void
*/

void print_alphabet_x10(void)
{
int round = 0;
char letter = 'a';
while (round < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
round++;
}
}

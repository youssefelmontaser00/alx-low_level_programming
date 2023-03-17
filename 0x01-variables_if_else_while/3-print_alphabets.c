#include <stdio.h>
/**
 * main - Prints the Alphabet in lower and upper letters.
 * Return: 0
 */
int main(void)
{
        char letter;

        letter = 'a';

        while (letter <= 'z')
        {
                putchar(letter);
                letter++;
        }

        /* z is 131 positions away than A in the ASCII table */
        letter = 'A';

        while (letter <= 'Z')
        {
                putchar(letter);
                letter++;
        }

        putchar('\n');
}

#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print comb of numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
* main - entry point
*
* Description: Positive anything is better than negative nothing
*
* Return: 0 (success)
*
*/

int main(void)
{
	char ch = 'a';
	char A = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}

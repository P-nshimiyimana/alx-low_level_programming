#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - print "string"
 *
 * Description: This is the first function of the program
 * Return: retuns 0 shown succesful execution
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
	putchar(n);
	if (n != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

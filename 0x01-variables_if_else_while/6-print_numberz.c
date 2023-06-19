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
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}

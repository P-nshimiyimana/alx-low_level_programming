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

	for (i = 90; i < 123; i++)
	{
	if (i != 101 && i != 113)
	{
	putchar(i);
	}
	}
	putchar('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - print name of program, followed by a new line
 *
 * @argc: arguement count
 * @argv: arguement array
 *
 * Description: prints the name of the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}

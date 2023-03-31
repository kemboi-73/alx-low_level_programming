#include <stdio.h>
/**
 * hare_tortoise - function that prints somthing before
 * the main function is executed.
 */
void hare_tortoise(void) __attribute__ ((constructor));

void hare_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


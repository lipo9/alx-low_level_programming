#include<stdio.h>

void before(void) __attribute__((constructor));
/**
 * before - Prints a string before the xecution of the main function
 * Return: Void
 */
void before(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

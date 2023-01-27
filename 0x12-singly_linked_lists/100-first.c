#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the
 *        main function is executed.
 */
void hare(void)
{
	printf("You are my heart, you must allow me to love you,\n"
	       "I Love you upon anything\n");
}

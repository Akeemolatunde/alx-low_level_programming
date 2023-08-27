#include "lists.h"

/**
 * myStartupFun - apply constructor attribute to mySarupFun()
 * and execute before main()
 */
void myStartupFun(void)__attribute__((constructor));

/**
 * myStartupFun - implimentation of myStartupFun
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

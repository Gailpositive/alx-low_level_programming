#include <stdio.h>
#include "main.h"

/**
 *  main - prints its name + \n
 *  if you rename the program,it will print the new name *  without having to complie it again
 *  You should not remove the path before the name of th *  e program
 *
 *   @argc: number of arguments typed
 *   @argv: arguements vector
 *   
 *   Return: 0
 */
 int main(int argc, char *argv[])
{

	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

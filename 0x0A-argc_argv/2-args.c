#include <stdio.h>
#include "main.h"

/**
 * ain - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Retunr: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int count = 0;

if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}

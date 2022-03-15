#include <stdio.h>
/**
 * main - Entry point
 * @filedes - file descriptor
 * @buf - pointer to array of character
 * @nbyte - number of bytes to print
 * Return: Always 0 (Success)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
write(1, "_putchar\n", 9);
return (0);
}

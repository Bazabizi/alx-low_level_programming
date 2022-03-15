#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int write(int filedes, const char *buf, unsigned int nbyte); 
int main(void) 
{ 
   write(1, "_putchar \n", 13); 
   return 0; 
} 

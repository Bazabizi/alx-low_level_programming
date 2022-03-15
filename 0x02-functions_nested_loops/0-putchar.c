#include <stdio.h>
int write(int filedes, const char *buf, unsigned int nbyte); 
int main() 
{ 
   write(1, "_putchar \n", 13); 
   return 0; 
} 

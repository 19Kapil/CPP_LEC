#include <stdio.h>
#include <stdlib.h>
int main()
{
int c,*pc;
pc=c;
*pc=c;
pc=&c;
*pc=c;
}
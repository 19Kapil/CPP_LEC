#include <stdio.h>
#include <stdlib.h>

    int main()
{
	int *pc,a = 19;
    pc=&a;
    printf("value of a:%d\n",a);
	printf("Address of a: %p\n", pc);

	return 0;
}


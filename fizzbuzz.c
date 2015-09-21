#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	
	sscanf(argv[1], "%d", &i);

	if (i % 3 == 0){
		printf("fizz");
	}
	if (i % 2 == 0){
		printf("buzz");
	}
	printf("\n");
	return 0;
}

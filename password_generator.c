#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	char name;

	printf("Enter your name please\n");
	scanf("%s\n", &name);
	printf("Welcome %s to the password generator\n", name);
}

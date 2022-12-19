#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_LIMIT 20
int main(void)
{
	char nameuser[MAX_LIMIT];
	printf("Enter your name please\n");
	fgets(nameuser, MAX_LIMIT, stdin);
	printf("Welcome %s to the password Generator", nameuser);
	return(0);
}

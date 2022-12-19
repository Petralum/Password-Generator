#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 20

int main(void)
{
	char nameuser[MAX_LIMIT];
	printf("Enter your name please\n");
	// fgets(nameuser, MAX_LIMIT, stdin);
	scanf("%s", nameuser);
	if (strcmp(nameuser, "Edward")==0 || strcmp(nameuser, "Petra")==0)
	{
	printf("\n\t********************\n\n");
	printf("Welcome %s to the password Generator\n\n", nameuser);
	printf("\t********************\n");
	}
	else
	{
		printf("Wrong user your are not allowed to execute this programe ask the admin for permission");
		exit(EXIT_FAILURE);
	}
	

	return(0);
}

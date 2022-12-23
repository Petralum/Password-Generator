#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 20


int password(int password_length)
{

	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\\||";

	printf("\t");

	if (password_length >= 8)
	{
		for (int i = 0; i < password_length; i++)
		{
			printf("*");
		}
		printf("\n");
		printf("\t");
		
		srand(time(NULL));
		for (int i = 0; i < password_length; i++)
		{
			printf("%c", list[rand() % (sizeof list -1)]);
		}

		printf("\n");
		printf("\t");

		for (int i = 0; i < password_length; i++)
		{
			printf("*");
		}

		printf("\n");
		
	}
	else
	{
		printf("password lenght does not reach the minimal number of lenght");
		exit(EXIT_FAILURE);
		return (1);
	}

	

}

int main(void)
{
	char nameuser[MAX_LIMIT];
	int password_length;

	printf("Enter your name please\n");
	//user authentification
	scanf("%s", nameuser);
	if (strcmp(nameuser, "Edward")==0 || strcmp(nameuser, "Petra")==0)
	{
	printf("\n\t********************\n\n");
	printf("Welcome %s to the password Generator\n\n", nameuser);
	printf("\t********************\n");

	printf("\n");
	printf("Please Enter the lenght of password desire\n");
	scanf("%d", &password_length);
	password(password_length);
	return(0);

	}
	else
	{
		printf("Wrong user your are not allowed to execute this programe ask the admin for permission");
		exit(EXIT_FAILURE);
		return (1);
	}
	
	
}

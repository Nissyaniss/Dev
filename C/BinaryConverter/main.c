#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void menu(char *choice, int error)
{

	system("clear||cls");
	printf("Menu\n\n");
	printf("Note : Only your first character is taken into account\n");
	if (error)
	{
		printf("Error: Value Entered Not Correct !\n");
		printf("Note : Value Must Be Between 1 and 4.\n\n");
	}
	printf("1) Unsigned Binary Converter\n");
	printf("2) Signed Binary Converter\n");
	printf("3) Float Binary Converter\n");
	printf("4) Quit\n\n");
	printf("Your Choice :\n");
	scanf("%s", choice);
}

void ConvertersMenu(char *tmp, int converter, int error)
{
	system("clear||cls");
	if (converter == 1)
		printf("Unsigned Binary Converter\n\n");
	else if (converter == 2)
		printf("Signed Binary Converter\n\n");
	else if (converter == 3)
		printf("Decimal Binary Converter\n\n");
	if (error)
	{
		printf("Error: Value Entered Not Correct !\n");
		if (converter == 1)
			printf("Note : Value Must Be Between -2 147 483 648 and 2 147 483 647.\n\n");
		else if (converter == 2)
			printf("Note : Value Must Be Between 0 and 4 294 967 295.\n\n");
		else if (converter == 3)
			printf("Note : Value Must Be Between ?? and ??.\n\n");
	}
	printf("Please Enter The Number You Want To Convert :\n");
	scanf("%s", tmp);
}

void RetryScreen(char *choice)
{
	printf("What do you want to do ?\n\n");
	printf("1) Return to Menu\n");
	printf("2) Start Again\n");
	printf("3) Quit\n\n");
	printf("Your Choice : \n");
	scanf("%s", choice);
}

void UnsignedBinaryConverter(void)
{
	unsigned int number;
	unsigned int numberSave;
	int allocNum;
	int i;
	char *result;
	char *tmp;

	tmp = malloc(sizeof(char) * 100);
	if (tmp == NULL)
	{
		printf("FATAL ERROR : MALLOC NULL");
		return;
	}
	allocNum = 0;

	ConvertersMenu(tmp, 1, 0);
	while (!(atoi(tmp)) || atoi(tmp) < 0)
	{
		tmp = realloc(tmp ,sizeof(char) * 100);
		if (tmp == NULL)
		{
			printf("FATAL ERROR : MALLOC NULL");
			return;
		}
		ConvertersMenu(tmp, 1, 1);
	}
	number = atoi(tmp);
	numberSave = number;
	free(tmp);
	while (numberSave != 0)
	{
		allocNum++;
		numberSave = numberSave / 2;
	}
	result = malloc(sizeof(char) * allocNum + 1);
	i = allocNum - 1;
	while (i >= 0)
	{
		result[i] = number % 2 + 48;
		number = number / 2;
		i--;
	}
	result[allocNum] = '\0';
	printf("Result is %s\n\n", result);
	free(result);
}


void SignedBinaryConverter(void)
{
	int number;
	int numberSave;
	int allocNum;
	int i;
	int negative;
	char *result;
	char *tmp;

	tmp = malloc(sizeof(char) * 100);
	if (tmp == NULL)
	{
		printf("FATAL ERROR : MALLOC NULL");
		return;
	}
	negative = 0;
	allocNum = 0;

	ConvertersMenu(tmp, 2, 0);
	while (!(atoi(tmp)))
	{
		tmp = realloc(tmp ,sizeof(char) * 100);
		if (tmp == NULL)
		{
			printf("FATAL ERROR : MALLOC NULL");
			return;
		}
		ConvertersMenu(tmp, 2, 1);
	}
	number = atoi(tmp);
	if (number < 0)
	{
		number = -number;
		negative = 1;
	}
	numberSave = number;
	free(tmp);
	while (numberSave != 0)
	{
		allocNum++;
		numberSave = numberSave / 2;
	}
	result = malloc(sizeof(char) * allocNum + 2);
	i = allocNum;
	while (i >= 0)
	{
		result[i] = number % 2 + 48;
		number = number / 2;
		i--;
	}
	if (negative == 1)
		result[0] = '1';
	else
		result[0] = '0';
	result[allocNum + 1] = '\0';
	printf("Result is %s\n\n", result);
	free(result);
}

void DecimalBinaryConverter(void)
{
	float number;
	float numberSave;
	int numberWithoutFloat;
	int onlyFloat;
	int allocNum;

	char *result;
	char *tmp;

	tmp = malloc(sizeof(char) * 100);
	if (tmp == NULL)
	{
		printf("FATAL ERROR : MALLOC NULL");
		return;
	}
	allocNum = 0;

	ConvertersMenu(tmp, 3, 0);
	while (!(atof(tmp)))
	{
		tmp = realloc(tmp ,sizeof(char) * 100);
		if (tmp == NULL)
		{
			printf("FATAL ERROR : MALLOC NULL");
			return;
		}
		ConvertersMenu(tmp, 3, 1);
	}
	printf("%s\n", tmp);
	free(tmp);
}

int main(void)
{
	char *choice;
	int end;
	int error;
	int StartingAgain;

	choice = malloc(sizeof(char) * 100);
	if (choice == NULL)
	{
		printf("FATAL ERROR : MALLOC NULL");
		return (0);
	}
	error = 0;
	end = 0;
	StartingAgain = 0;

	while (end == 0)
	{
		end = 1;
		if (StartingAgain == 0)
			menu(choice, error);
		if (choice[0] == '1' || StartingAgain == 1)
		{
			UnsignedBinaryConverter();
			choice = realloc(choice, sizeof(char) * 100);
			if (choice == NULL)
			{
				printf("FATAL ERROR : MALLOC NULL");
				return;
			}
			RetryScreen(choice);
			if (choice[0] == '1')
			{
				end = 0;
				StartingAgain = 0;
			}
			else if (choice[0] == '2')
			{
				end = 0;
				StartingAgain = 1;
			}
			choice = realloc(choice, sizeof(char) * 100);
			if (choice == NULL)
			{
				printf("FATAL ERROR : MALLOC NULL");
				return (0);
			}
		}
		else if (choice[0] == '2' || StartingAgain == 2)
		{
			SignedBinaryConverter();
			choice = realloc(choice, sizeof(char) * 100);
			if (choice == NULL)
			{
				printf("FATAL ERROR : MALLOC NULL");
				return;
			}
			RetryScreen(choice);
			if (choice[0] == '1')
			{
				end = 0;
				StartingAgain = 0;
			}
			else if (choice[0] == '2')
			{
				end = 0;
				StartingAgain = 2;
			}
			choice = realloc(choice, sizeof(char) * 100);
			if (choice == NULL)
			{
				printf("FATAL ERROR : MALLOC NULL");
				return (0);
			}
		}
		else if (choice[0] == '3' || StartingAgain == 3)
		{
			DecimalBinaryConverter();
			choice = realloc(choice, sizeof(char) * 100);
			if (choice == NULL)
			{
				printf("FATAL ERROR : MALLOC NULL");
				return;
			}
			RetryScreen(choice);
			if (choice[0] == '1')
			{
				end = 0;
				StartingAgain = 0;
			}
			else if (choice[0] == '2')
			{
				end = 0;
				StartingAgain = 3;
			}
			choice = realloc(choice, sizeof(char) * 100);
			if (choice == NULL)
			{
				printf("FATAL ERROR : MALLOC NULL");
				return (0);
			}
		}
		else if (choice[0] == '4')
			end = 1;
		else
		{
			end = 0;
			error = 1;
		}
	}
	printf("here");
	free(choice);
	return 0;
}

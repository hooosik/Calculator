#include <stdio.h>

int first_number;
int second_number;

void first()
{
	printf("By the way, take a first number please \n");
	scanf("%d", &first_number);
	//printf("%d\n", first_number);
}

void second()
{
	printf("Second number please \n");
	scanf("%d", &second_number);
	//printf("%d\n", second_number);
}
void calculation()
{
	char calculation;
	printf("Please choose function to use ' + - * /'");
	scanf(" %c", &calculation);
	if(calculation == '+')
	{
		printf("%d\n", first_number + second_number);
	}
	else if(calculation == '-')
	{
		printf("%d\n", first_number - second_number);
	}
	else if(calculation == '/')
	{
		printf("%d\n", first_number / second_number);
	}
	else if(calculation == '*')
	{
		printf("%d\n", first_number * second_number);
	}else
	{
		printf("Error. Use '+ - * /' only. Thanks");	
	}
	
	
	
	
}


int main()
{
	printf("Hello world \n");
	printf("This Calculator was written as a Mission from Dcraftbg \n");
	first();
	second();
	calculation();
	return 0;
}

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_power_of_2(int number)
{
	while(number % 2 == 0)
		number = number / 2;
	if (number == 1)
		return(1);
	else
		return(0);
}

int main(int argc, char **argv)
{
	int number;
	if (argc == 2)
	{
		number =is_power_of_2(atoi(argv[1]));
		printf("%d",number);
	}
}

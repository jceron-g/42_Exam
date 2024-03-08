#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int number1;
	int number2;

	if(argc == 3)
	{
		if ((number1 = atoi(argv[1])) > 0 && (number2 = atoi(argv[2])) > 0)
		{
			while (number1 != number2)
			{
				if(number1 > number2)
					number1 -= number2;
				else
					number2 -= number1;
			}
			printf("%d", number1);
		}
	}
	printf("\n");
}

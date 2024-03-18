#include <unistd.h>

int first_char(char *string, char c)
{
	int i;

	i = 0;
	while(string[i])
	{
		if(string[i] == c)
			return(i);
		i++;
	
	}
	return(i);
}

int main(int argc, char **argv)
{
	int i;
	int	j;
	int check;
	
	check = 0;
	j = 0;
	i = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			if(i == first_char(argv[1], argv[1][i]))
			{
				check = 0;
				j = 0;
				while(argv[2][j])
				{
					if(argv[1][i] == argv[2][j] && check == 0)
					{
						write(1, &argv[1][i], 1);
						check = 1;
					}
					j++;
				}	
			}	
			i++;
		}
	}
		write(1, "\n", 1);
}

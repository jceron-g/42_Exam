#include <unistd.h>

int main(int argc, char **argv)
{
	char tab[256] = {0};
	int	i;
	int j;

	i = 0;
	j = 1;
	if(argc == 3)
	{
		while(j < 3)
		{
			while(argv[j][i])
			{
				tab[(int)argv[j][i]] = 1;
				i++;
			}
			i = 0;
			j++;
		}
		j = 1;
		while(j < 3)
		{
			while(argv[j][i])
			{
				if(tab[(int)argv[j][i]] == 1)
				{
					write(1, &argv[j][i], 1);
					tab[(int)argv[j][i]] = 2;
				}
				i++;
			}
			i = 0;
			j++;
		}
	}
	write(1, "\n", 1);
}

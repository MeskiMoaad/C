#include <unistd.h>

int	check(char c, char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int	can(char *str, char c, int size)
{
	int i = 0;
	while (i < size)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{

	while (argv[1][i])
	{
		if (can(argv[1], argv[1][i], i) == 0)
		write(1, &argv[1][i], 1);
		i++;
	}
	while (argv[2][j])
	{
		if (check(argv[2][j], argv[1]) == 0 && can(argv[2], argv[2][j], j) == 0)
			write(1, &argv[2][j], 1);
		j++;
	}
	}
	write(1, "\n", 1);
}

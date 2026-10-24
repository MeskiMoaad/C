#include <unistd.h>
int	main(int argc, char *argv[])
{
	int	i;
	char c;
	int count;

	i = 0;
	while (argv[1][i])
	{
		count = 1;
		while (argv[1][i] == argv[1][i + count])
			count += 1;
	
	{
		c = count + '0';
		write(1, &c, 1);
		write(1, &argv[1][i], 1);
		i = count + i;
	}
	}
}


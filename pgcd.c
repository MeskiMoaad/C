#include <unistd.h>
int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	result;
	i = 0;
	s = 1;
	result = 0;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;

	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * s);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long nb)
{

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}

	if (nb > 9)
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	//	ft_putchar(nb + '0');
}

int main(int argc, char *argv[])
{
	int i = 1;
	int div = 1;
	if (argc == 3)
	{
	int a = ft_atoi(argv[1]);
	int b= ft_atoi(argv[2]);

	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			div = i;
		i++;
	}
	ft_putnbr(div);
	}

	write(1, "\n", 1);
}



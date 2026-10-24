#include <unistd.h>

long	ft_atoi(char *str)
{
	int	i;
	int	s;
	long	result;
	i = 0;
	s = 1;
	result = 0;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
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
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		if (str[i] == '+' || str[i] == '-')
			i++;
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
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
int	main(int argc, char *argv[])
{
       	ft_strrev(argv[1]);
	long int nb = ft_atoi(argv[1]);
	if (argc == 2)
	{
		if (nb < -2147483648 || nb > 2147483647)
			write(1, "0", 1);
		else
			ft_putnbr(nb);
	}
	write(1, "\n", 1);
}



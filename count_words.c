#include <stdio.h>
int	count_words(char *str)
{
	int	i;
	int count = 0;
	i = 0;

	while (str[i])
	{
		if ( str[i] != ' ' && str[i] != '\t' &&( i == 0 || str[i - 1] == ' ' || str[i  - 1] == '\t'))
			count += 1;
		i++;
	}
	return count;
}
int main()
{
	char str[] = "	";
	printf("%d\n", count_words(str));
}

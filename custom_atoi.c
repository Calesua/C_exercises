#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int	i;
	int	sgn;
	int	out;

	i = 0;
	out = 0;
	sgn = 1;
	while ((str[i] >= '\n' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sgn *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
			out = out * 10 + (str[i] - '0');
			i++;
	}
	return (sgn * out);
}

int	main(void)
{
	printf("With my function:\n");
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("With the default function:\n");
	printf("%d\n", atoi(" ---+--+1234ab567"));
}

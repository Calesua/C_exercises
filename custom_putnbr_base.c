#include <stdio.h>
#include <unistd.h>

void printchar(char num)
{
	write(1, &num, 1);
}

int	basecheck(char *base)
{
	int	blen;
	int	i;
	int	j;

	blen = 0;
	while (base[blen] != '\0')
	{
		if (base[blen] == '-' || base[blen] == '+')
			return (0);
		blen++;
	}
	if (blen < 2)
		return 0;
	i = -1;
	while (i++ < blen)
	{
		j = i;
		while (base[j++] != '\0')
		{
			if (base[i] == base[j])
				return(0);
		}
	}
	return blen;
}

void ft_putnbr_base(int nbr, char *base)
{
	int	blen;

	blen = basecheck(base);
	if (blen)
	{
		if (nbr < 0)
		{
			printchar('-');
			ft_putnbr_base(nbr * -1, base);
		}
		if (nbr >= blen)
		{
			ft_putnbr_base(nbr / blen, base);
			printchar(base[nbr % blen]);
		}
		else
			printchar(base[nbr]);
	}
}

int	main (void)
{
	ft_putnbr_base(355, "101");
	return (0);
}

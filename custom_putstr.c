#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
	ft_putstr("Hola k ase.");
	return (0);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while (*(str + index) != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

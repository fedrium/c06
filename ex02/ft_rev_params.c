#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	
	i = 1;
	j = argc - 1;
	while (i <= j)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j--;
	}
	return (0);
}
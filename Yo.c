
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str != '/0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc >= 2)
	{
		while (argv != '/0')
		ft_putstr(argv[i]);
		i++;
	}
	return(0);
}
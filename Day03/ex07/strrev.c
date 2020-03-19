#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void 	strrev(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	while(str[i] != 1)
	{
		ft_putchar(str[i]);
		i--;
	}
}

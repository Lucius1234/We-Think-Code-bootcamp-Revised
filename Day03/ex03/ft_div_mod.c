void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	ft_div_mod(7, 3,0,0);
	return 0;
}


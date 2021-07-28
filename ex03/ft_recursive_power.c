// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

/*
int main()
{
	int nb;
	int power;

	nb = 4;
	power = 5;
	printf("%d\n", ft_recursive_power(nb, power));
}
*/
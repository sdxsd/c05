// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 2)
		return (index);
	else
		return (index = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)));
}

/*
int main()
{
    printf("%d\n", ft_fibonacci(5));
}
*/
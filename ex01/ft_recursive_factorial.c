#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 1)
        return (1);
    else
        nb = (nb * ft_recursive_factorial(nb - 1));
    return (nb);
}

int main()
{
   int x = 8;
   printf("%d\n", ft_recursive_factorial(x));
}

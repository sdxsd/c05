#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int iterator;
    int product;

    product = nb;
    iterator = 1;
    if (nb == 0 && power == 0)
        return (1);
    if (power < 2)
        return (nb);
    while (iterator < power)
    {
        product *= nb;
        ++iterator;
    }
    return (product);
}

int main()
{
    int nb;
    int power;

    power = 8;
    nb = 4;
    printf("%d\n", ft_iterative_power(nb, power));
}

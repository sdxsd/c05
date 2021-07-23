#include <stdio.h>

int ft_sqrt(int nb)
{
    int iterator;
    int a;

    iterator = 0;
    while (iterator < nb)
    {
        a = iterator * iterator;
        if (a == nb)
            return (a / iterator);
        else
            iterator++;
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_sqrt(15));
}

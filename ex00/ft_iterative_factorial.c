#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int counter = 1;
    int product = 1;

    while (counter <= nb)
    {
        product *= counter;
        counter += 1;
    }
    return (product);
}

int main()
{
    int x  = 7;
    printf("FACTORIAL %d = %d\n", x, ft_iterative_factorial(x));
}

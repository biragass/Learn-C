#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 3);
    write(1, "\t", 1);
    write(1, "asd", 3);
}
int main(void)
{
    ft_putchar('c');
}

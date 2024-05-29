int ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}
void	ft_putnbr(int n, int fd)

{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, fd);
		ft_putchar((nb % 10) + '0', fd);
	}
	else
		ft_putchar(nb + '0', fd);
}
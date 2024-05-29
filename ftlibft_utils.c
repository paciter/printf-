int	ftsize(int i)
{
	int	n;

	n = 0;
	if (i == 0)
		return (1);
	if (i < 0)
		i = -i;
	while (i > 0)
	{
		i = i / 10;
		n++;
	}
	return (n);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i])
    {
        i++;
    }
    return(i);
}

int ft_putchar(int c)
{
    return(write(1, &c. 1));
}

int	ft_putstr(char *s)
{
	size_t	i;
    int	    len;
    
    len = 0;
	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		len = ft_putchar(s[i]);
		i++;
	}
    return (len)
}

int	ft_putnbr(int n)
{
    int len;

    len = 0

if (n == -2147483648)
		len = len + ft_putstr("-2147483648");
	else if (n == 2147483647)
		len = len + ft_putstr("2147483647");
	
	if (n < 0)
   
	{
		len = len + t_putchar('-');
		n = -n;
	}
	if (nb > 9)
	{
		len = len + ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	return(len);
}

int ft_putnbr_un(unsigned int n)
{
    unsigned int len;

    len = 0;

    if (n > 9)
        len = len + ft_putnbr_un(n / 10);
	len = len +ft_putchar((n % 10) + '0');
	return (len);
}
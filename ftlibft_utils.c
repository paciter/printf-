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

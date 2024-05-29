int ft_putnbrbase(unsigned long nbr, char *base)
{
    unsigned long size;
    int len;

    size = ft_strlen(base);
    len = 0;

    if (size < 2) 
        return (0);
;
    if(nbr >= size)
        len = len + ft_putnbrbase(nbr / size, base);
    len = len + ft_putchar(base[nbr % size]);
    return(len);
}
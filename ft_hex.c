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

int ft_printptrhex(void *ptr)
{
    unsigned long address;
    int len;

    address = (unsigned long)ptr;
    len = 0;
    len = len + ft_putstr("0x");
    if (address == 0)
        len = len + ft_putchar('0');
    else
        len = len + ft_putnbrbase(address, "0123456789abcdef", 16);
    return len;
}
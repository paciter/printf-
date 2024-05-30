
int     ft_format(va_list *args const char str)
{
    int i;

    i = 0;

    if(str == 'c')
        i = i + ft_putchar(va_args(args, int));
    else if(str == 'd')
        i = i + ft_putnbr(va_arg(args, int));
    else if(str == 's')
        i = i + ft_putstr(va_arg(args, char *));
    else if(str == 'x')
         i = i + ft_putnbrbase(va_arg(args, unsigned int), "0123456789abcdef");
    else if(str == 'X')
           i = i + ft_putnbrbase(va_arg(args, unsigned int), "0123456789ABCDEF");
    else if(str == 'p')
         i = i + ft_printptrhex(va_arg(args, unsigned long));
    else if(str == 'u')
         i = i + ft_putnbr_un(va_arg(args, unsigned int));
    else if(str == 'i')
         i = i + ft_putnbr(va_arg(args, int));
    else if(str == '%')
         i = i + ft_putchar('%');
 }



int ft_printf(const char *str, ...)
{
    va_list args;

    va_start(args, str);
}
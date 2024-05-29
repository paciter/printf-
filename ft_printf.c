
int     ft_format(va_list *args const char str)
{
    int i;

    i = 0;

    if(str == 'c')
        i = i + ft_putchar(va_args(args, int));
   else if(str == 'd')
        i = i +
    else if(str == 's')
         i = i +
     else if(str == 'x')
         i = i +
      else if(str == 'X')
          i = i +
     else if(str == 'p')
         i = i +
     else if(str == 'u')
         i = i +
     else if(str == 'i')
         i = i +
      else if(str == '%')
         i = i +
    }
}


int ft_printf(const char *str, ...)
{
    va_list args;

    va_start(args, str);
}
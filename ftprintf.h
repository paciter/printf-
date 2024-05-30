#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int ft_strlen(char *str);
int ft_putchar(int c);
int	ft_putstr(char *s);
int ft_putnbr_un(unsigned int n);
int	ft_putnbr(int n);
int     ft_format(va_list *args const char str);
int ft_putnbrbase(unsigned long nbr, char *base);
int ft_printptrhex(void *ptr);

#endif
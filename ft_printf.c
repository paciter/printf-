/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:59:29 by rufaccia          #+#    #+#             */
/*   Updated: 2024/06/25 18:33:30 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_format(va_list args, const char str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (str == 'd')
		len += ft_putnbr(va_arg(args, int));
	else if (str == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (str == 'x')
		len += ft_putnbrbase(va_arg(args, unsigned int), "0123456789abcdef");
	else if (str == 'X')
		len += ft_putnbrbase(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (str == 'p')
		len += ft_printptrhex(va_arg(args, void *));
	else if (str == 'u')
		len += ft_putnbr_un(va_arg(args, unsigned int));
	else if (str == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (str == '%')
		len += ft_putchar('%');
	return(len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while(str[i])
	{
		if(str[i] == '%')
		{
			len += ft_format(&args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return(len);
}

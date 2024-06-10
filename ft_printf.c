/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:59:29 by rufaccia          #+#    #+#             */
/*   Updated: 2024/06/07 14:11:37 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_format(va_list *args const char str)
{
	int	i;

	i = 0;
	if (str == 'c')
		i =+ ft_putchar(va_args(args, int));
	else if (str == 'd')
		i =+ ft_putnbr(va_arg(args, int));
	else if (str == 's')
		i =+ ft_putstr(va_arg(args, char *));
	else if (str == 'x')
		i =+ ft_putnbrbase(va_arg(args, unsigned int), "0123456789abcdef");
	else if (str == 'X')
		i =+ ft_putnbrbase(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (str == 'p')
		i =+ ft_printptrhex(va_arg(args, unsigned long));
	else if (str == 'u')
		i =+ ft_putnbr_un(va_arg(args, unsigned int));
	else if (str == 'i')
		i =+ ft_putnbr(va_arg(args, int));
	else if (str == '%')
		i =+ ft_putchar('%');
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
		if(str[i] == "%")
		{
			len =+ ft_format(args, str[i + 1]);
			i++;
		}
		else
			len =+ ft_putchar(str[i]);
	}
	va_end(args)
	return(len);
}

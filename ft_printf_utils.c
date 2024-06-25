/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:59:33 by rufaccia          #+#    #+#             */
/*   Updated: 2024/06/25 18:34:07 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	size_t	i;
	int		len;

	len = 0;
	i = 0;
	if (!s)
		return;
	while (s[i])
	{
		len = ft_putchar(s[i]);
		i++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		len = len + ft_putstr("-2147483648");
	else if (n == 2147483647)
		len = len + ft_putstr("2147483647");
	if (n < 0)
	{
		len = len + t_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		len = len + ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	return (len);
}

int	ft_putnbr_un(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n > 9)
		len = len + ft_putnbr_un(n / 10);
	len = len + ft_putchar((n % 10) + '0');
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:59:25 by rufaccia          #+#    #+#             */
/*   Updated: 2024/06/25 18:13:24 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_putnbrbase(unsigned long nbr, char *base)
{
	unsigned long	size;
	int				len;

	size = ft_strlen(base);
	len = 0;
	if (size < 2)
		return (0);
	if (nbr >= size)
		len += ft_putnbrbase(nbr / size, base);
	len += ft_putchar(base[nbr % size]);
	return (len);
}

int	ft_printptrhex(void *ptr)
{
	unsigned long	address;
	int				len;

	address = (unsigned long)ptr;
	len = 0;
	len += ft_putstr("0x");
	if (address == 0)
		len += ft_putchar('0');
	else
		len += ft_putnbrbase(address, "0123456789abcdef");
	return (len);
}

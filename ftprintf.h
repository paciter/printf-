/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:14:01 by rufaccia          #+#    #+#             */
/*   Updated: 2024/06/25 18:19:44 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_strlen(char *str);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr_un(unsigned int n);
int	ft_putnbr(int n);
int	ft_format(va_list *args, const char str);
int	ft_putnbrbase(unsigned long nbr, char *base);
int	ft_printptrhex(void *ptr);
int	ft_printf(const char *str, ...);

#endif

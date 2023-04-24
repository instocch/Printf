/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstocche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:01:16 by mstocche          #+#    #+#             */
/*   Updated: 2023/04/24 16:04:59 by mstocche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putchar('-');
		i += ft_putchar('2');
		n = (147483648);
	}
	if (n < 0)
	{
		i += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		i += ft_putnbr(n / 10);
	i += ft_putchar(n % 10 + 48);
	return (i);
}
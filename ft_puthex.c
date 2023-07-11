/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armhakob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:32:16 by armhakob          #+#    #+#             */
/*   Updated: 2023/01/30 21:14:30 by armhakob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long nbr, short x)
{
	int	count;

	count = 0;
	if (x)
	{
		if (nbr < 16)
			count += ft_putchar("0123456789abcdef"[nbr % 16]);
		else
		{
			count += ft_puthex(nbr / 16, 1);
			count += ft_putchar("0123456789abcdef"[nbr % 16]);
		}
	}
	else
	{
		if (nbr < 16)
			count += ft_putchar("0123456789ABCDEF"[nbr % 16]);
		else
		{
			count += ft_puthex(nbr / 16, 0);
			count += ft_putchar("0123456789ABCDEF"[nbr % 16]);
		}
	}
	return (count);
}

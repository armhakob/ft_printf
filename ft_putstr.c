/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armhakob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:21:32 by armhakob          #+#    #+#             */
/*   Updated: 2023/01/30 21:04:08 by armhakob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	count = ft_strlen(str);
	write(1, str, count);
	return (count);
}

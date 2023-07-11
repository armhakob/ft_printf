/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armhakob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:00:43 by armhakob          #+#    #+#             */
/*   Updated: 2023/01/30 21:12:46 by armhakob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char *str, va_list arg)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (*str == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (*str == 'p')
		count += ft_putptr(va_arg(arg, unsigned long long));
	else if (*str == 'd')
		count += ft_putnbr(va_arg(arg, int));
	else if (*str == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (*str == 'u')
		count += ft_putnbr_u(va_arg(arg, unsigned int));
	else if (*str == 'x')
		count += ft_puthex((unsigned long long)va_arg(arg, unsigned int), 1);
	else if (*str == 'X')
		count += ft_puthex((unsigned long long)va_arg(arg, unsigned int), 0);
	else if (*str == '%')
			count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_check(str, arg);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(arg);
	return (count);
}

// int main()
// {
// 	char c = 'b';
// 	ft_printf("%c", c);
// }

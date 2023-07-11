/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armhakob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:01:34 by armhakob          #+#    #+#             */
/*   Updated: 2023/01/30 21:14:46 by armhakob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_check(const char *str, va_list arg);
int		ft_putchar(char c);
size_t	ft_strlen(const char *str);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		ft_puthex(unsigned long long nbr, short x);
int		ft_putptr(unsigned long long ptr);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handel_x_X_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <htemsama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:05:27 by htemsama          #+#    #+#             */
/*   Updated: 2024/03/07 22:23:25 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handel_hexa(const char *str, int i, va_list arg)
{
	int	count;

	count = 0;
	if (str[i] == 'x')
		count += ft_checkdecimal(va_arg(arg, unsigned int));
	else if (str[i] == 'p')
		count += ft_checkadresse1(va_arg(arg, unsigned long));
	else if (str[i] == 'X')
		count += ft_checkdecimal_caps(va_arg(arg, unsigned int));
	return (count);
}

int	ft_checkdecimal(unsigned int n)
{
	char	*str;
	int		count;

	str = "0123456789abcdef";
	count = 0;
	if (n > 15)
	{
		count += ft_checkdecimal(n / 16);
		count += ft_putchar(str[n % 16]);
	}
	else
		count += ft_putchar(str[n]);
	return (count);
}

int	ft_checkadresse1(unsigned long n)
{
	char	*str;
	int		count;

	str = "0123456789acbdef";
	count = 0;
	if (n == 0)
	{
		count += ft_print("(nil)");
	}
	else
	{
		count += ft_print("0x");
		count += ft_checkadresse2(n);
	}
	return (count);
}

int	ft_checkadresse2(unsigned long n)
{
	char	*str;
	int		count;

	str = "0123456789acbdef";
	count = 0;
	if (n > 15)
	{
		count += ft_checkadresse2(n / 16);
		count += ft_putchar(str[n % 16]);
	}
	else
		count += ft_putchar(str[n]);
	return (count);
}

int	ft_checkdecimal_caps(unsigned int n)
{
	char	*str;
	int		count;

	str = "0123456789ABCDEF";
	count = 0;
	if (n > 15)
	{
		count += ft_checkdecimal_caps(n / 16);
		count += ft_putchar(str[n % 16]);
	}
	else
		count += ft_putchar(str[n]);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handerall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <htemsama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:05:45 by htemsama          #+#    #+#             */
/*   Updated: 2024/03/07 22:16:59 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handlerall(const char *str, int i, va_list arg)
{
	int	count;

	count = 0;
	if (str[i] == 'c' || str[i] == 's')
		count = ft_handelc(str, i, arg);
	else if (str[i] == 'd' || str[i] == 'i' || str[i] == 'u')
		count += ft_handlenum(str, i, arg);
	else if (str[i] == 'x' || str[i] == 'X' || str[i] == 'p')
		count += ft_handel_hexa(str, i, arg);
	else if (str[i] == '%')
		count += ft_putchar('%');
	return (count);
}

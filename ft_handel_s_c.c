/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handel_s_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <htemsama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:05:13 by htemsama          #+#    #+#             */
/*   Updated: 2024/03/07 22:22:47 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		i += ft_print("(null)");
		return (i);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_handelc(const char *str, int i, va_list arg)
{
	int		count;
	char	c;

	count = 0;
	if (str[i] == 'c')
	{
		c = va_arg(arg, int);
		write(1, &c, 1);
		count++;
	}
	else if (str[i] == 's')
		count += ft_print(va_arg(arg, char *));
	return (count);
}

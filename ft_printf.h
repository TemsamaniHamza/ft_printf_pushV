/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <htemsama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:06:12 by htemsama          #+#    #+#             */
/*   Updated: 2024/03/07 21:43:05 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_handlenum(const char *str, int i, va_list arg);
int	ft_putnbr(int n);
int	ft_putnbr_long(unsigned int n);
int	ft_putchar(char c);
int	ft_print(char *str);
int	ft_handelc(const char *str, int i, va_list arg);
int	ft_handel_hexa(const char *str, int i, va_list arg);
int	ft_checkdecimal(unsigned int n);
int	ft_checkdecimal_caps(unsigned int n);
int	ft_handlerall(const char *str, int i, va_list arg);
int	ft_printf(const char *str, ...);
// int	ft_checkadresse(unsigned long n);
int	ft_checkadresse2(unsigned long n);
int	ft_checkadresse1(unsigned long n);

#endif

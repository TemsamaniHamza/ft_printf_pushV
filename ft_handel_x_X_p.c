#include "ft_printf.h"

int ft_handel_hexa(const char *str, int i, va_list arg)
{
    int count;
    
    count = 0;
    if (str[i] == 'x')
        count += ft_checkdecimal(va_arg(arg, unsigned long));
    else if (str[i] == 'p')
    {
        write(1, "0x", 2);
        count += ft_checkadresse(va_arg(arg, unsigned long));
        count++;
        count++;
    }
    else if (str[i] == 'X')
        count += ft_checkdecimal_caps(va_arg(arg, unsigned long ));
    return (count);
}

int ft_checkdecimal(unsigned long n)
{
    char *str = "0123456789abcdef";
    int count = 0;

    if (n > 15)
    {
        count += ft_checkdecimal(n / 16);
        count += ft_putchar(str[n % 16]);
    }
    else
        count += ft_putchar(str[n]);
    return (count);
}
int ft_checkadresse(unsigned long n)
{
    char *str = "0123456789acbdef";
    int count = 0;

    if (n > 15)
    {
        count += ft_checkadresse(n/16);
        count += ft_putchar(str[n % 16]);
    }
    else
        count += ft_putchar(str[n]);
    return (count);
}

int ft_checkdecimal_caps(unsigned long n)
{
    char *str = "0123456789ABCDEF";
    int count = 0;

    if (n > 15)
    {
        count += ft_checkdecimal_caps(n / 16);
        count += ft_putchar(str[n % 16]);
    }
    else
        count += ft_putchar(str[n]);
    return (count);
}
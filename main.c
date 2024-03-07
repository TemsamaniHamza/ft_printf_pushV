#include "ft_printf.h"

/* int main()
{
    int j = ft_printf("%d\n", -215);
    // int d = printf("%d\n", -12312312215);
    // printf("j is : %d && d is ", j);
} */

int main(){
    char *strqqqq = "hello worldasd!"; 
    char str[] = "hello worldaasdasdsd!"; 
    printf("%d\n",printf("printf : %p\n", &str));
    ft_printf("%d\n",ft_printf("printf : %p\n", &str));
    // printf("%d\n",printf("printf : %p\n", str));
    // ft_printf("%d\n",printf("ft_printf : %p\n", str));
    return (0);
}
